#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - main structure
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_H_ */
