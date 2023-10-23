#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: variable
 *
 * Return: 1 Success 0 otherwise.
 */

int _strlen(char *s)
{
    int index;

    for (index = 0; s[index] != '\0' ; index++);

    return (index);
}
