# Introduction
This folder contains files that deal with:
1. Creating and using C structures
2. Creating functions that use C structures i.e create them or modify them
3. Using pointers to user0defined structures
4. Using the typedef command to create user-defined types
5. Using typedef in conjunction with structures

## dog.h

A header file that defines a new type struct dog with the following elements:
1. name of type char*
2. age of type float
3. owner of type char*

## 1-init_dog.c

A function that initializes a variable of type struct dog

## 2-print_dog.c

A function that prints a struct dog structure with the format:
- Name: name of dog
- Age: age of the dog
- Owner: name of the owner

## dog.h

A header file that defines a new type dog_t as a new name for the type
struct dog.

## 4-new_dog.c

A function that creates a new dog structure.

## 5-free_dog.c

A function that frees dogs. The dog structure was created by allocating memory
for it using malloc.
