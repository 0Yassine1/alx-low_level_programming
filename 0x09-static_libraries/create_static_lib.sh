#!/bin/bash
# Creating a static library called liball.a from all .c files

# Compile all .c files into .o object files
gcc -c *.c

# Create a static library liball.a from the object files
ar rcs liball.a *.o

# Remove the object files after creating the library
rm -f *.o