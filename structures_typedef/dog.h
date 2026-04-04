#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: defines a dog structure with name, age, and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
