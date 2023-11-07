

#ifndef DOGSSS
#define DOGSSS

/**
 * struct dog - dog data
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);
#endif
