#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments received
 * @argc: type int argument
 * @argv: type char argument of string
 * Return: if not receive 2 arg, rt error
 */

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int result = num1 * num2;

    printf("%d\n", result);

    return 0;
}
