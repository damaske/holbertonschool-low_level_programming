#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - Calls a function to process and print a name.
 * @name: Pointer to a string containing the name.
 * @f: Pointer to a function that takes a string as an argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
