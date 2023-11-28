#ifndef DOG_H
#define DOG_H

typedef struct dog {
    char *name;
    float age;
    char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

