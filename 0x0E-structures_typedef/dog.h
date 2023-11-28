#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure representing a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
typedef struct dog {
    char *name;
    float age;
    char *owner;
} dog_t;

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - frees memory allocated for a dog
 * @d: a pointer to the dog to free
 */
void free_dog(dog_t *d);

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
