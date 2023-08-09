#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: type int argument
 * @argv: type char argument of string
 * Return: none
 */

int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;
}
