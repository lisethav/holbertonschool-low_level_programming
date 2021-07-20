#ifndef __DOG_H
#define __DOG_H
/**
 * struct dog - structure for a basic dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: data structure for dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}; dog
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif