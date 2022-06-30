#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
/**
 **new_dog - uncion to create a new dog
 *@name: dogs name
 *@age: dog age
 *@owner: dog owner
 *Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *pr;
        int size_n, size_o, i;

        if (name == NULL)
                return (NULL);
        if (owner == NULL)
                return (NULL);
        size_n = _strlen(name);
        size_o = _strlen(owner);
        pr = malloc(sizeof(dog_t));
        if (pr == NULL)
                return (NULL);
        pr->name = malloc(size_n + 1);
        if (pr->name == NULL)
        {
                free(pr->name);
                free(pr);
                return (NULL);
        }
        pr->owner = malloc(size_o + 1);
        if (pr->owner == NULL)
        {
                free(pr->name);
                free(pr->owner);
                free(pr);
                return (NULL);
        }
        pr->age = age;
        for (i = 0; i <= size_n; i++)
                pr->name[i] = name[i];
        for (i = 0; i <= size_o; i++)
                pr->owner[i] = owner[i];
        return (pr);
}
/**
 * _strlen - function for determinate string longer
 * @s: is the string to count
 * Return: int
 */
int _strlen(char *s)
{
        int i;

        for (i = 0; *s != '\0'; i++)
                s++;
        return (i);
}
