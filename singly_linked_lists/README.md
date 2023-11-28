# *C - Singly Linked Lists*

### Table of contents

- [Description](#description)
- [Files](#files)
- [Struct](#struct)
- [Resources](#resources)
- [Credits](#credits)

## Description

This is my submission to *Holberton Coding School's* module of *Singly Linked Lists*. In this module we get an introducction to *Singly Linked Lists*, how to *understand* them and how to *make* and *manipulate* them.

## Files

- `README.md` - File that contains project description.
- `lists.h` - Header file containing function prototypes and *list_s* struct.
- `0-print_list.c` - Function that prints all the elements of a list.
- `1-list_len.c` - Function that returns the number of elements in a linked list.
- `2-add_node.c` - Function that adds a new node at the beginning of a list.
- `3-add_node_end.c` - Function that adds a new node at the end of a list.
- `4-free_list.c` - Function that frees a list.

*`Main.c` files <ins>not</ins> included.*

## Struct

This is the struct used in this module:
```c
/**
 * struct list_s - singly linked list.
 *
 * @str: string - malloc'ed string.
 * @len: length of the string.
 * @next: points to the next node.
 *
 * Description: singly linked list node structure.
 */

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

## Resources

- *[Linked Lists](https://youtu.be/udapt4FGY20?si=Yi2pwBAy9Vgyv59D)*

## Credits

- *[Jonathan Pérez](https://github.com/prodjohnper)*
