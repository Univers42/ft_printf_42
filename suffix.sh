#!/bin/bash

# Check if correct number of arguments is provided
if [ $# -ne 2 ]; then
    echo "Usage: $0 <filename> <suffix>"
    echo "Examples:"
    echo "  $0 ft_convert_wrappers_two.c _bonus"
    echo "  $0 file.txt _bak"
    exit 1
fi

filename="$1"
suffix="$2"

# Extract the base name and extension
base_name="${filename%.*}"
extension="${filename##*.}"

# Create the new filename with suffix before the extension
new_filename="${base_name}${suffix}.${extension}"

# Rename the file
mv "$filename" "$new_filename"

