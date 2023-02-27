#include "../helpers/helpers.h"

#define SIZE 100
#define MAX 100

void selectionSort(int *p, size_t size)
{
    for (size_t i = 0; i < size - 1; i++)
        swap(p + i, getArrayMin(p + i, size - i));
}

int main(void)
{
    printf("\nSelection Sort example with an array of %d elements\n\n", SIZE);

    int a[SIZE];

    randomize();

    generateRandomIntArray(a, SIZE, MAX);

    printArray(a, SIZE);

    selectionSort(a, SIZE);

    printArray(a, SIZE);
}