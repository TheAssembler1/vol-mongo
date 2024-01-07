#!/bin/bash

source init_secrets.sh

echo "openai key: $OPENAI_API_KEY"

# Function to get the current date
get_current_date() {
  echo "generating date"
  date +"%Y-%m-%d %H:%M:%S"
}

# Function to generate a commit message for a specific file using ChatGPT
generate_commit_message_for_file() {
  local file=$1
  echo "generating commit message for file: $file"
  local prompt="Reviewing changes in file $file:\n\n$(git diff $file)\n\nDescribe the changes and provide a commit message for $file:\n"

  # Generate commit message using ChatGPT
  local commit_message=$(echo -e "$prompt" | openai api completions.create --model text-davinci-003 --temperature 0.7)

  echo "Prompt before API call:"
  echo -e "$prompt"

  echo "Generated commit message:"
  echo "$commit_message"

  # Return the generated commit message
  echo "$commit_message"
}

echo "adding changes"
git add .

# Check if there are any changes
if [[ -n $(git status -s) ]]; then
  echo "Changes detected"

  # Loop through each file with changes
  while IFS= read -r file; do
    commit_message=$(generate_commit_message_for_file "$file")

    if [[ -n "$commit_message" ]]; then
      echo "committing changes for file: $file"
      git commit -m "$commit_message ($(get_current_date))" -- "$file"
    else
      echo "No commit message provided for file $file. Changes not committed."
    fi
  done < <(git diff --name-only)

  echo "pushing changes"
  git push
else
  echo "No changes detected. Nothing to commit."
fi
