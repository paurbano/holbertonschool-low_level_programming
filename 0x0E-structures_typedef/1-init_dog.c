#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: base
 * @name: nombre
 * @age: edad
 * @owner: propietario
 * Description: returns the natural square root of a number.
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}
