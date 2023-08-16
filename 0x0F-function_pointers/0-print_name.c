#include "main.h"
#include <stdio.h>

void imprimer_nom_majuscules(char *nom) {
    for (int i = 0; nom[i]; i++) {
        putchar(toupper(nom[i]));
    }
    putchar('\n');
}

void imprimer_nom_minuscules(char *nom) {
    for (int i = 0; nom[i]; i++) {
        putchar(tolower(nom[i]));
    }
    putchar('\n');
}

void imprimer_nom(char *nom, void (*f)(char *)) {
    f(nom);
}

int main() {
    char nom[] = "Jean Dupont";

    printf("Impression du nom avec imprimer_nom_normal :\n");
    imprimer_nom(nom, imprimer_nom_normal);

    printf("Impression du nom en majuscules :\n");
    imprimer_nom(nom, imprimer_nom_majuscules);

    printf("Impression du nom en minuscules :\n");
    imprimer_nom(nom, imprimer_nom_minuscules);

    return 0;
}
