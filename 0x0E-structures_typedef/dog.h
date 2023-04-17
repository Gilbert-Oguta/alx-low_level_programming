#ifndef DOG_P
#define DOG_P
/**
 * struct dog - structure that stores dog identity
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: stores the identity of the dog's name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - the typedef for the dog's structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
