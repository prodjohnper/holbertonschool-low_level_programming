# *C - Hash Tables*

### Table of contents

- [Description](#description)
- [Files](#files)
- [Structures](#structures)
- [Resources](#resources)
- [Credits](#credits)

## Description

This is my submission to *Holberton Coding School's* module of *Hash tables*. In this module we get an introducction to *Hash Tables*, what is a *hash function*, what is a *hash table*, what is and how to resolve a *collision*, *advantages* and *drawbacks* of using hash tables and the *most common cases* of hash tables.

## Files

- `README.md` - File that contains project description.
- `hash_tables.h` - Header file containing function prototypes and the structures used.
- `0-hash_table_create.c` - Function that creates a hash table.
- `1-djb2.c` - Function implementing the `djb2` algorithm.
- `2-key_index.c` - Function that gives you the index of a *key*.
- `3-hash_table_set.c` - Function that adds an element to the hash table.
- `4-hash_table_get.c` - Function that retrieves a value associated with a key.
- `5-hash_table_print.c` - Function that *prints* a hash table.
- `6-hash_table_delete.c` - Function that *deletes* a hash table.

*`Main.c` file <ins>not</ins> included.*

## Structures

This are the structures used in this module.

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */

typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */

typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

## Resources

- *[What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://youtu.be/MfhjkfocRR0?si=yctRevfdcicWBFGa)*
- *[Hash function](https://en.wikipedia.org/wiki/Hash_function)*
- *[Hash table](https://en.wikipedia.org/wiki/Hash_table)*

## Credits

- *[Jonathan Pérez](https://github.com/prodjohnper)*
