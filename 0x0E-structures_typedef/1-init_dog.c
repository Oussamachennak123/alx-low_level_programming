#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void init_dog(struct dog *d, char *name, float age, char *owner) 
{
    d->name = (char *)malloc(strlen(name) + 1);
    d->owner = (char *)malloc(strlen(owner) + 1);
    strcpy(d->name, name);
    strcpy(d->owner, owner);
    d->age = age;
}

int main() {
    struct dog myDog;
    init_dog(&myDog, "Fido", 3.5, "John");
    printf("Name: %s\n", myDog.name);
    printf("Age: %.2f\n", myDog.age);
    printf("Owner: %s\n", myDog.owner);

    free(myDog.name);
    free(myDog.owner);

    return (0);
}
