#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Description: Defines a dog struct with three members
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

/**
 * init_dog - Initializes a dog struct
 * @d: pointer to dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Takes pointers to each member and sets
 * them to the values passed as arguments.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints the contents of a dog struct
 * @d: pointer to dog struct
 *
 * Description: If any member is NULL, prints "(nil)"
 * instead of the member's value.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog struct on the heap
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees a dog struct from the heap
 * @d: pointer to dog struct to free
 *
 * Description: Frees the memory allocated to a dog struct.
 */
void free_dog(dog_t *d);

#endif /* DOG_H */

