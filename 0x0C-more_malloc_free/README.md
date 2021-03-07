# Introduction

This folder contains functions that deal with the use of the malloc function to
allocate memory dynamically as well as the exit function to terminate processes
that are automatically createrd when a program runs.

## 0-malloc_checked.c

Allocates memory using malloc and returns a pointer to the allocated memory.
If malloc fails, the function causes normal process termination with a status
value of 98.

## 1-string_nconcat.c

Concatenates 2 strings and returns a pointer to the newly created space in
memory that contains the new string.
The new string contains s1 followed by the first n bytes of s2 and is null
terminanted.
If n is greater or equal to the length of s2, the the entire string s2 is used.
If NULL is passed, the function treats it as an empty string.
If the function fails, it returns NULL.

## 2-calloc.c

Allocates memory for an array using malloc. The size of the array is given using
as the first argument and the size of each element of the array is given as the
second argument.
If either of these arguments is 0, then the function returns NULL.
The elements of the array are initialized to 0.
If malloc fails, the function returns NULL.

## 3-array_range.c

Creates an array of integers using malloc. the min and max values of the array
are given as arguments. The array should contain values fro min to max (both
included), ordered from min to max.
If min is greater than max, the function returns NULL.
If malloc fails, retunr NULL.
If success, the function returns a pointer to the newly created array.

## 100-realloc.c

Reallocates a memory block using malloc and copies the old memory block contents
to the new memory block contents. The function resizes a previously allocated
memory block and frees the old memory block.

## 101-mul.c

Multiplies two numbers stored in strings and prints the result. If more than 2
strings are passed, the function prints 'Error' and exits with a status of 98.
If a non-digit character is encountered, the function prints 'Error' and exits
with a status of 98.
