#ifndef DOG_H
#define DOG_H

/**
 * struct dog - entry point to defininga struct
 * @name: name of dog
 * @age: age of dog
 * @owner: ownder of dog
 *
 * Description: the defining of dog details
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new type from struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
