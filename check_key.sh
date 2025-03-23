#!/bin/bash

# Script to search for words/patterns in files using regular expressions

# Check if a search pattern was provided
if [ $# -eq 0 ]; then
    echo "Usage: $0 <search_pattern> [directory]"
    echo "Example: $0 'printf' ."
    echo "This will search for the pattern 'printf' in all files in the current directory and subdirectories."
    exit 1
fi

# The search pattern is the first argument
SEARCH_PATTERN="$1"

# Optional: Allow specifying a directory as second argument, default to current directory
SEARCH_DIR="${2:-.}"

echo "Searching for pattern: '$SEARCH_PATTERN' in $SEARCH_DIR"
echo "------------------------------------------------------"

# Use grep to search recursively
# -r: recursive search through directories
# -n: show line numbers
# --color=auto: highlight the matching text
# -E: interpret pattern as an extended regular expression
grep -r -n -E --color=auto "$SEARCH_PATTERN" "$SEARCH_DIR" 2>/dev/null

# Check if grep found anything
if [ $? -ne 0 ]; then
    echo "No matches found for '$SEARCH_PATTERN'"
    exit 2
fi

exit 0
