#ifndef _DOG_
#define _DOG_

/**
 * struct dog - Dog info
 * @name: char with dog name
 * @age: float with dog age
 * @owner: char with dog's owner name
 *
 * Description: This structure works to declare dog info with var
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for structure dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
