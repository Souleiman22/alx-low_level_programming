#!/bin/bash

# Compile each .c file into an object file
for source_file in *.c; do
    gcc -c "$source_file" -o "${source_file%.c}.o"
done

# Create the static library
ar rcs liball.a *.o

# Clean up intermediate object files
rm -f *.o

echo "Static library liball.a created successfully."
