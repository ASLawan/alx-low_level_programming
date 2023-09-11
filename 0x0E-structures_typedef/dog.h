#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - dog strcuture
 * @name: name member
 * @age: age member
 * @owner: owner member
 *
 * Description: dog information
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
