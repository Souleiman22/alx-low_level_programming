#!/bin/bash
<<<<<<< HEAD
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
=======

# Compile each .c file into an object file
for source_file in *.c; do
    gcc -c "$source_file" -o "${source_file%.c}.o"
done

# Create the static library
ar rcs liball.a *.o

# Clean up intermediate object files
rm -f *.o

echo "Static library liball.a created successfully."
>>>>>>> 3271c60d9d14685756b7c8bcfaa1d0d9a4e36b40
