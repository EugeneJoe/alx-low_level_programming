# Introduction

The files in this folder deal with the declaration, definition and use of
variadic functions.
Variadic functions are functions that are able to take an undefuned number and
type of arguments. The C language provides a way of defining such functions but
in order to access the arguments, macros from the stdarg.h header file must be
used.
The stdarg.h file defines the macros va_list, va_arg, va_start and va_end which
are used to access the variable arguments in the variadic function.

## 0-sum_them_all.c

A function that returns the sum of all its parameters. The function can take a
variable number of arguments. The first defined variable indicates the number
of arguments passed to the function when it is called.

## 1-print_numbers.c

A function that prints numbers, followed by a new line. The function takes a
string that contains the separator to be used between the numbers, an integer
gives the number of variable arguments, and a varibale number of arguments that
are the numbers to be printed.
If the separator is NULL, then dont print it.

## 2-print_strings.c

A function that prints strings followed by a new line. The function takes a
string that contains the separator to be printed between the strings, and an
integer that contains the number of strings passed to the function.
If the separator is NULL, don'r print it.
If any of the strings is NULL, print (nil) instead.
Print a new line at the end.

## 3-print_all.c

A function that prints anything. It takes a string that contains the types of
arguments passed to the function:
  - c: char
  - i: integer
  - f: float
  - s: char * (if string is NULL, print (nil) instead
Print a new line at the end of the function.
