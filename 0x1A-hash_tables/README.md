# 0x1A-hash_tables

This repository contains the source code and materials related to the 0x1A-hash_tables project. This project deals with hashing and hash tables. The goal is to understand how hash tables work, use them in programs, and understand the importance of hashing.

In this project, we will be covering the following topics:

- What is a hash function
- What makes a good hash function
- What is a hash table, how do they work, and how to use them
- What is a collision and what are the main ways of dealing with collisions in hash tables
- What are the advantages and drawbacks of using hash tables
- What are the most common use cases of hash tables

The repository contains the following:

- `hash_tables.h` - Header file containing prototypes and necessary libraries to be used with the source code
- `0-hash_table_create.c` - Source code for initializing a hash table
- `1-djb2.c` - Source code for the djb2 hash function
- `2-key_index.c` - Source code for finding the index of a key in a hash table
- `3-hash_table_set.c` - Source code for adding an element to a hash table
- `4-hash_table_get.c` - Source code for finding an element in a hash table
- `5-hash_table_print.c` - Source code for printing a hash table
- `6-hash_table_delete.c` - Source code for deleting a hash table
- `README.md` - README file with project details

Please refer to each source file for specific information on its usage. 

This repository is perfect for anyone wanting to learn how to use hash tables and how hashing works.


## What is a Hash Table?

A hash table is a data structure used to store data items in an array-like structure, using a key-value pair. A hash table uses a hash function to compute indices for the items stored in it. This makes retrieving the desired data item fast and efficient.

A hash table can be thought of as an array with keys instead of indices. Each item in the array is represented by a key, which is used to search for the item in the hash table.

The keys must be unique, as they are used to store and retrieve data from the hash table. When a key is used to search for an item in the hash table, it is hashed to compute the index of the desired item. This hashing process is what makes hash tables fast and efficient for data retrieval.

## Hashing Algorithms

A hash table uses a hashing algorithm to compute the index of the desired item, given the key. The most commonly used hashing algorithms are linear probing and double hashing.

Linear probing uses a linear search to find an empty slot in the hash table. If all slots are filled, the search starts from the beginning of the table, until an empty slot is found.

Double hashing uses two different hash functions to compute the index of desired item. The first hash function is used to compute the initial index, and the second hash function is used to compute the next index if the initial index is filled. This method is more efficient than linear probing, as it will find an empty slot faster.

## Implementing a Hash Table

In order to implement a hash table, you will need to define the following components:

- A hash table structure
- A hashing algorithm
- A key-value pair structure

The hash table structure will store the data items, the hash algorithm will compute the index for the desired item, and the key-value pair will store the key and its corresponding value.

To create a hash table, you will need to first create a hash function. This function will take in a key, compute its index, and then return the index of the desired item.

Once the hash function has been created, you will need to create the hash table structure. This structure should include an array to store the data items, a size field to store the size of the hash table, and a capacity field to store the current capacity of the hash table.

The data items will be stored in the form of key-value pairs. These pairs should include the key of the desired item and the corresponding value.

Once the hash table structure has been created, you can start implementing the necessary operations on the hash table. These operations include insert(), search(), remove(), and resize().

The insert() operation will insert a given key-value pair into the hash table. The search() operation will search for a given key in the hash table and return its corresponding value. The remove() operation will remove a given key-value pair from the hash table. And the resize() operation will increase the capacity of the hash table when necessary.

## Best Practices

When implementing a hash table, there are a few best practices that you should follow:

- Balance memory usage and performance. When dealing with large data sets, it is important to consider the amount of memory required for storing the data.
- Choose an appropriate hash function. The choice of hash function is important for the performance of the hash table.
- Avoid collisions. Collisions occur when two keys are hashed to the same index. This can be avoided by using a large hash table size or by using a different hashing algorithm.
- Handle rehashing correctly. Rehashing occurs when the hash table is resized. In order to handle this correctly, you must ensure that the key-value pairs are inserted into the new hash table correctly.
- Consider all potential operations. When creating a hash table, it is important to consider all potential operations that can be performed on the data. This will help you design an efficient hash table.

## Hash Table Examples

Hash tables are used in many applications, including databases, caches, and data structures. Here are a few examples of how hash tables are used in practice:

- Databases: Hash tables are used in databases to quickly store and retrieve large amounts of data.
- Caches: Hash tables are used to store frequently accessed data in memory, allowing for faster access times.
- Data Structures: Hash tables are used in various data structures, such as dictionaries and sets, to store and retrieve data efficiently.
