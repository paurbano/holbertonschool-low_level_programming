#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog.
 * @name: struct
 * @age: edad
 * @owner: propietario
 * Return: new_dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *perro;
int lonName = 0, lonOwner = 0, i = 0;
if (name == NULL || owner == NULL)
return (NULL);
perro = malloc(sizeof(struct dog));
if (perro == NULL)
return (NULL);
for ( ; name[lonName] != '\0' ; lonName++)
;
for ( ; owner[lonOwner] != '\0' ; lonOwner++)
;
perro->name = malloc(sizeof(char) * (lonName + 1));
if (perro->name == NULL)
{
free(perro);
return (NULL);
}
for (i = 0 ; i < lonName ; i++)
perro->name[i] = name[i];

perro->name[i] = '\0';

perro->age = age;
perro->owner = malloc(sizeof(char) * (lonOwner + 1));
if (perro->owner == NULL)
{
free(perro->name);
free(perro);
return (NULL);
}
for (i = 0 ; i < lonOwner ; i++)
perro->owner[i] = owner[i];

perro->owner[i] = '\0';

return (perro);
}
