# Introduction

This folder contains functions and programs dealing with pointers and arrays in
the C language. It also includes a header file aptly named holberton.h
that contains function prototypes for all the functions contained in the folder.

## 0-strcat

A function that concatenates 2 strings. It appends the string pointed to by *src
to the string pointed to by *dest, overwriting the terminating null byte in
*dest, and then adds a terminating null byte at the end of *dest.
The function returns a pointer to the resulting string *dest.

## 1-strncat

A function that concatenates 2 strings. It appends n bytes from the string
pointed to by src to the end of the string pointed to by dest, overwriting its
terminating null character and adding one at the end.
The function returns a pointer to the resulting string dest.

## 2-strncpy

A function that copies a string. It copies n bytes from the string pointed to
by src to the string pointed to by dest. If the length of src is less than n
bytes, the difference is filled with null characters (\0). A terminating null
byte is added at the end os the string dest.
The function returns a pointer to the string that has been copied into.

## 3-strcmp

A function that compares 2 strings. It returns an integer equal to the difference
between the first two characters that aren't equal. If the strings are the same
it returns 0.

## 4-rev_array

A function that reverses the contents of an array of integers. N is given as the
number of elements of the array.

## 5-string_toupper

A function that changes all lowercase letters of a string to uppercase letters.
The function returns a pointer to the resulting string.

## 6-cap_string

A function that capitalizes all words of a string i.e., it capitalizes the
first letter of each word in the string. Word separators include:
1. Space
2. Horizontal tab
3. New line character
4. Commas (,)
5. Semi-colon (;)
6. Period (.)
7. Exclamation mark (!)
8. Question mark (?)
9. Double quotation marks (\")
10. Opening parenthesis '('
11. Closing parenthesis ')'
12. Opening curly brace '{'
13. Closing curly brace '}'
The function returns a pointer to the resulting string

## 7-leet

A function that encodes a string into 1337. The encoding is done as follows:
1. Letters a and A are replaced by 4
2. Letters e and E are replaced by 3
3. Letters o and O are replaced by 0
4. Letters t and T are replaced by 7
5. Letters l and L are replaced by 1
The function returns a pointer to the resulting string.

## 8-rot13

A function that encodes a string using rot13 encoding. In rot13 encoding every
letter is replaced by the letter 13 places after it in the alphabet,
in the same case. Since the alphabet contains 26 characters, the same function
can be used to decode a string that is rot13 encoded.
The function returns a pointer to the resulting string.

## 100-print_number

A function that prints a number stored in a string. The function does not use
any standard library functions.

## 101-magic

This program and its source code demonstrates how to change the value of a
variable without referencing the variable name or using a pointer to the
variable. It demonstrates the inner workings of stack memory.

## 102-infinite_add

This function adds two numbers stored in strings. Pointer n1 points to the
string containing the first number while n2 points to the string containing
the second number. Pointer r points to the string used to store the result
and size_r is the size of the string pointed to by r. If the result is longer
than size_r then the function returns a 0, else it returns a r.
