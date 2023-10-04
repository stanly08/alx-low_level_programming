#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create a static library from the object files
ar rcs liball.a *.o

# Clean up the object files
rm -f *.o

echo "Static library liball.a created successfully."

