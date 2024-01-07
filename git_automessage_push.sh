#!/bin/bash

source init_secrets.sh

echo "openai key: $OPENAI_API_KEY"

# Function to get the current date
get_current_date() {
  echo "generating date"
  date +"%Y-%m-%d %H:%M:%S"
}

# Function to generate a commit message using ChatGPT
generate_commit_message() {
  echo "generating commit message"
  local file_changes=$(git status -s)
  local prompt="Reviewing file changes:\n\n$file_changes\n\nPlease provide a commit message:\n"

  # Iterate over each line in git status
  while IFS= read -r line; do
    # Add comments about each file change to the prompt
    prompt+="Comment on change: $line\n"
  done

  echo "Prompt before API call:"
  echo -e "$prompt"

  # Generate commit message using ChatGPT
  local commit_message=$(echo -e "$prompt" | openai api completions.create --model text-davinci-003 --temperature 0.7)

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

  echo "1"
  commit_message=generate_commit_message
  echo "2"

  # Commit and push if a message is provided
  if [[ -n "$commit_message" ]]; then
    echo "committing changes"
    git commit -m "$commit_message ($(get_current_date))"
    echo "pushing changes"
    git push
  else
    echo "No commit message provided. Changes not committed."
  fi
else
  echo "No changes detected. Nothing to commit."
fi
