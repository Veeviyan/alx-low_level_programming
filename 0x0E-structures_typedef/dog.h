#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - user-defined data type
 * @name: user name
 * @age: user age
 * @owner: user owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
