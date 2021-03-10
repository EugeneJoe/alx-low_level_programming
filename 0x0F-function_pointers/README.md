# Introduction

The projects in this folder deal with function pointers, specifically:
1. What function pointers point to
2. How to create and use function pointers
3. Real-life scenarios where using function pointers is beneficial

## 0-print_name.c

A function that prints a name in different formats by using different functions.
The functions are passed to a wrapper function through function pointers.

## 1-array_iterator.c

A function that executes a function given as a parameter on each element of an
array. The function takes 3 arguments:

1. Pointer to the array
2. Size of the array
3. Pointer to the function that should be executed on the array.

## 2-int_index.c

A function that searches for an integer in an array of integers.
The function takes 3 arguments:
1. Pointer to the integer array
2. Size of the array
3. Pointer to a function that searches for the integer in the array.
   - This function takes an integer as an argument and returns an integer
The function should return the index of the integer in the array if successful.

## 3

A program that performs simple operations on integers. Basically implements a
calculator that does the following operations:
1. +: addition
2. -: subtraction
3. *: multiplication
4. /: division
5. %: modulo
The program is used as follows: 'calc num1 operator num2'

### 3-calc.h

This file contains all the finction prototypes and data structures used by
the program.

### 3-op_functions.c

This file contains the following 5 function:
1. op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
2. op_sub: returns the difference of a and b.
   Prototype: int op_sub(int a, int b);
3. op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
4. op_div: returns the result of the division of a by b.
   Prototype: int op_div(int a, int b);
5. op_mod: returns the remainder of the division of a by b.
   Prototype: int op_mod(int a, int b);

### 3-get_op_func.c

This file contains the function that selects the correct function to perform the
operation asked by the user.

### 3-main.c

Calls all the necessary functions to carry out the selected operation on the
numbers provided.
The numbers are provided as strings and thus need to be converted to integers
using the atoi function.
