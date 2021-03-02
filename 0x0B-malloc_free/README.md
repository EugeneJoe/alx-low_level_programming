# Introduction

The files in this folder deal with dynamic memory management i.e., allocating a
block of memory from the heap for use in your program and freeing that block of
memory once the program is done using it. The two functions used to achieve this
are 'malloc' and 'free' which are defined in the C library 'stdlib.h'.

## 0-create_array.c

A function that creates an array of characters and initializes it with a
specific character.

## 1-strdup.c

A function that copies agiven string and stores the copy in a newly allocated
space in memory. The function returns a pointer to this copy of the given string
or returns NULL is the given string was NULL or if there was insufficient memory
available.

## 2-str_concat.c

A function that concatenates 2 strings and stores the resulting string in a
newly allocated space in memory. The function returns a pointer to the resulting
string or NULL is an error occurs i.e., insufficient memory available.

## 3-alloc_grid.c

A function that returns a pointer to a 2 dimensional array of integers.
Each element of the grid is initialized to 0. If an error occurs, the function
returns NULL. if any of the dimensions of the 2d array is 0 or negative, the
functioin returns NULL.

## 4-free_grid.c

A function that frees a 2d grid or array that was previously created by the
alloc_grid function.
