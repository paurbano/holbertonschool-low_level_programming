#ifndef MACRO
#define MACRO
/**
 * struct dog - struct dog
 * @name: base
 * @age: edad
 * @owner: propiedad
 * Description: returns the natural square root of a number.
 */
typedef struct dog {
char *name;
float age;
char* owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
