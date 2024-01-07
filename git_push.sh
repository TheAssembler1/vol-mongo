#!/bin/bash

# Get the current date
current_date=$(date +"%Y-%m-%d %H:%M:%S")

# Perform the git operations
git add .
git commit -m "vol_mongo commit on $current_date"
git push
