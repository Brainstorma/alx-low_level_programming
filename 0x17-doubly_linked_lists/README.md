# 0x17. C - Doubly Linked Lists

## Overview

This project focuses on introducing and working with doubly linked lists in C. This repo provides a task and a template file for each task that must be completed. Additionally, the project provides a header file `lists.h` that contains the library of functions used to manipulate the doubly linked lists. 

## Requirements

* Allowed editors: `vi`, `vim`, `emacs`
* All files will be compiled on Ubuntu 14.04 LTS
* Programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
* Code should use the Betty style
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the C standard library

## Compilation

All your files will be compiled this way:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o executable_name
```

## Tasks

### 0. Print List

Write a function that prints all the elements of a `dlistint_t` list.

* Prototype: `size_t print_dlistint(const dlistint_t *h);`
* Return: the number of nodes
* Format: see example

```bash
guillaume@ubuntu:~/0x17$ cat 0-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = print_dlistint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
guillaume@ubuntu:~/0x17$ gcc -Wall -Werror -Wextra -pedantic 0-main.c 0-print_dlistint.c -o 0-list
guillaume@ubuntu:~/0x17$ ./0-list 
9
8
-> 2 elements
guillaume@ubuntu:~/0x17$
```

### 1. List Length

Write a function that returns the number of elements in a linked `dlistint_t` list.

* Prototype: `size_t dlistint_len(const dlistint_t *h);`

### 2. Add Node

Write a function that adds a new node at the beginning of a `dlistint_t` list.

* Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

### 3. Add Node at the End

Write a function that adds a new node at the end of a `dlistint_t` list.

* Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

### 4. Free List

Write a function that free a `dlistint_t` list.

* Prototype: `void free_dlistint(dlistint_t *head);`

### 5. Get Node at Index

Write a function that returns the nth node of a `dlistint_t` linked list.

* Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
* where `index` is the index of the node, starting from `0`
* if the node does not exist, return `NULL`

### 6. Sum List

Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list.

* Prototype: `int sum_dlistint(dlistint_t *head);`
* if the list is empty, return `0`

### 7. Insert at Index

Write a function that inserts a new node at a given position.

* Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
* where `idx` is the index of the list where the new node should be added. `Index` starts at `0`
* Returns: the address of the new node, or `NULL` if it failed

### 8. Delete at Index

Write a function that deletes the node at index `index` of a `dlistint_t` linked list.

* Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
* where `index` is the index of the node that should be deleted. Index starts at `0`
* Returns: `1` if it succeeded, `-1` if it failed

## Built With

* C (GCC)

## Author

This directory was written by [Brainstorma](https://github.com/brainstorma).
