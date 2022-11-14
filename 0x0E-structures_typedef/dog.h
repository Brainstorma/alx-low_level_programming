#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's info
 * @name: d_name
 * @age: d_age
 * @owner: owner's name
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_d - typedef for struct dog
 **/
typedef struct dog dog_d;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_d *new_dog(char *name, float age, char *owner);
void free_dog(dog_d *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
