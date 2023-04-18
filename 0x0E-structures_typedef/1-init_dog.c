#include "main.h"
#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * init_dog - initializes a dog struct
 * struct dog - struct dog declaration
 * @d: th declared variable
 * @name: the name of the dog
 * @age: age of dog
 * @owner: name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = malloc(sizeof(struct dog));
if (d == NULL)
{
printf("Error");
}
d->name = name;
d->age = age;
d->owner = owner;
}
