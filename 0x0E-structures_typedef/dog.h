#ifndef STRUCT_DOG
#define STRUCT_DOG

/**
 * struct dog - good boy's details
 * @name: good boy's name
 * @age: good boy's age
 * @owner: lucky owner
 *
 * Description: contains introduction for dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* STRUCT_DOG */
