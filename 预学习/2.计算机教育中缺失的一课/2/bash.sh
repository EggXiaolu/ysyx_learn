#!/bin/bash
foo=bar
echo "$foo"
echo '$foo'

echo "Starting program at $(date)"
echo "Running program $0 with $# argument with pid $$"

for file in "$@"; do
    grep foobar "$file" > /dev/null 2> /dev/null

    if [[$? -ne 0]]; then
        echo "File $file dose not have any foobar, adding one."
        echo "# foobar" >> "$file"
    fi
done
