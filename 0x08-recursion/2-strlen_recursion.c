#include "main.h"
/**
 * _strlen_recursion - length of a string
 * Return: strlen_recursion
 */

int _strlen_recursion(char *s)
{

/*Basw condition*/
if (*s == '\0')
return (0);

else
return (1 + _strlen_recursion(s + 1)); /*Sum 1*/
}
