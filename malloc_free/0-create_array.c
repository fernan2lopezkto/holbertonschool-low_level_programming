#include "main.h"
#include "stdlib.h"
/**
 * *create_array - create the array whit espeific size initialiced whit c
 * @size: is the string long
 * @c: is the initialisation
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *pr;
	unsigned int ran;

	if (size == 0)/*detect a error*/
		return (NULL);

	pr = malloc(size * sizeof(char));/*make array*/

	for (ran = 0; ran < size; ran++)/*initialize array*/
		pr[ran] = c;
	return (pr);/*return inicial pointer*/
}
