# 0x1E-Search Algorithms

Welcome to the 0x1E-Search Algorithms repository! This is a collection of 16 tasks that aim to teach and reinforce various search algorithms, such as linear search, binary search, jump search, interpolation search and exponential search.
This project is about implementing various search algorithms in C. Search algorithms are methods of finding a target value within a collection of data. They can be classified into two categories: linear search and binary search.

Linear search algorithms check each element of the data until they find the target value or determine that it does not exist. Linear search algorithms have a time complexity of O(n), where n is the number of elements in the data.

Binary search algorithms divide the data into two halves and compare the target value with the middle element of each half. Depending on the result of the comparison, they discard one half and repeat the process with the other half until they find the target value or determine that it does not exist. Binary search algorithms require that the data is sorted in ascending order. Binary search algorithms have a time complexity of O(log n), where n is the number of elements in the data.

In this project, you will learn how to implement and use linear and binary search algorithms in C. You will also learn about their advantages and disadvantages, and how to measure their efficiency using Big O notation.

Each task is composed of a set of ALX style C files and a main function that tests the output of the function related to the search algorithm being taught in that task. It is worth noting that every file contains a brief description of what each function does, as well as their return values.

## Table of Contents

Below is a list containing the 16 tasks in this repository, with their respective brief descriptions and links to their respective folders:

| Task | Brief Description | Link |
|------|-------------------|------|
| 0. Linear search | Function that searches for a value in an array of integers using linear search. | [0-linear.c](./0-linear.c) |
| 1. Binary search | Function that searches for a value in an array of integers using binary search. | [1-binary.c](./1-binary.c) |
| 2. Big O #0 | Time complexities (best, average and worst case) of linear search algorithm. | [2-O](./2-O) |
| 3. Big O #1 | Time complexities (best, average and worst case) of binary search algorithm. | [3-O](./3-O) |
| 4. Big O #2 | Time complexities (best, average and worst case) of `n` elements using linear search. | [4-O](./4-O) |
| 5. Big O #3 | Time complexities (best, average and worst case) of `n/2` elements using binary search. | [5-O](./5-O) |
| 6. Big O #4 | Time complexities (best, average and worst case) of `sqrt(n)` elements using jump search. | [6-O](./6-O) |
| 7. Jump search | Function that searches for a value in a sorted array of integers using jump search. | [100-jump.c](./100-jump.c) |
| 8. Big O #5 | Time complexities (best, average and worst case) of `sqrt(n)` elements using jump search. | [101-O](./101-O) |
| 9. Interpolation search | Function that searches for a value in a sorted array of integers using interpolation search. | [102-interpolation.c](./102-interpolation.c) |
| 10. Exponential search | Function that searches for a value in a sorted array of integers using exponential search. | [103-exponential.c](./103-exponential.c) |
| 11. Advanced binary search | Function that searches for the first occurrence of a value in an array of integers using binary search. | [104-advanced_binary.c](./104-advanced_binary.c) |
| 12. Jump search in a singly linked list | Function that searches for a value in a singly linked list of integers using jump search. | [105-jump_list.c](./105-jump_list.c) |
| 13. Linear search in a skip list | Function that searches for a value in a skip list of integers using linear search. | [106-linear_skip.c](./106-linear_skip.c) |
| 14. Big O #6 | Time complexities (best, average and worst case) of `n` elements using skip list search. | [107-O](./107-O) |
| 15. Big O #7 | Time complexities (best, average and worst case) of a linked list search. | [108-O](./108-O) |

## Requirements

- The code is compiled using `gcc 4.8.4`.
- The code is using `Ubuntu 14.04 LTS`.

## Compilation and Testing

Each task contains a main function that tests the search algorithm being taught in that task. To compile and test the code, simply clone the repository and compile as following:

```bash
$ git clone https://github.com/brainstorma/0x1E-search_algorithms.git
$ cd 0x1E-search_algorithms/TASK_FOLDER
$ gcc -Wall -Werror -Wextra -pedantic *.c -o tester
$ ./tester
```


This project is part of the curriculum of the ALX Full-Stack Software Engineering program.
