# *C - Doubly Linked Lists*

### Table of contents

- [Description](#description)
- [Files](#files)
- [Struct](#struct)
- [Resources](#resources)
- [Credits](#credits)

## Description

This is my submission to *Holberton Coding School's* module of *Doubly Linked Lists*. In this module we get an introducction to *Doubly Linked Lists*, how to *understand* them and how to *make* and *manipulate* them.

## Files

- `README.md` - File that contains project description.
- `lists.h` - Header file containing function prototypes and *list_s* struct.
- `0-print_dlistint.c` - Function that prints all the elements of a list.
- `1-dlistint_len.c` - Function that returns the number of elements in a linked list.
- `2-add_dnodeint.c` - Function that adds a new node at the beginning of a list.
- `3-add_dnodeint_end.c` - Function that adds a new node at the end of a list.
- `4-free_dlistint.c` - Function that frees a list.
- `5-get_dnodeint.c` - Function that returns the nth node of a list.
- `6-sum_dlistint.c` - Function that returns the sum of all the data (n) of a list.
- `7-insert_dnodeint.c` - Function that inserts a new node at a given position.
- `8-delete_dnodeint.c` - Function that deletes the node at index index of a list.

*`Main.c` files <ins>not</ins> included.*

## Struct

This is the `struct` used in this module:
```c
/**
 * struct dlistint_s - doubly linked list
 *
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */

typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Resources

- *[What is a Doubly Linked List](https://youtu.be/k0pjD12bzP0?si=PhPTg_w0HJok_lDe)*

## Credits

- *[Jonathan Pérez](https://github.com/prodjohnper)*
