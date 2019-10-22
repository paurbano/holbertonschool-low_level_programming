#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog.
 * @name: struct
 * @age: edad
 * @owner: propietario
 * Description: function that creates a new dog.
 * Return: new_dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *perro;
int lonName = 0, lonOwner = 0, i = 0;
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
free(perro->name);
free(perro);
return (NULL);
}

for (i = 0 ; i < lonName ; i++)
perro->name[i] = name[i];

perro->age = age;

perro->owner = malloc(sizeof(char) * (lonOwner + 1));
if (perro->owner == NULL)
{
free(perro->owner);
free(perro);
return (NULL);
}

for (i = 0 ; i < lonOwner ; i++)
perro->owner[i] = owner[i];

return (perro);
}
