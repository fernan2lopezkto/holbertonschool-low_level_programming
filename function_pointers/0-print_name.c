#include "function_pointers.h"
/**
 *print_name - asign the number to function
 *@name: name to set
 *@f: pointer to function
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
