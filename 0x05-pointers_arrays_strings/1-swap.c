#include "main.h"

/**
 * function that swaps the values of two integers
 * Return :n
 */
void swap_int(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
