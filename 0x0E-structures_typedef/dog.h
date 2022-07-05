#ifndef tt
#define tt
/**
 * struct dog - creates a struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
