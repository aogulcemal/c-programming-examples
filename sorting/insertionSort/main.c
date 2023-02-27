#include "../helpers/helpers.h"

#define SIZE 100
#define MAX 100

void insertionSort(int *p, size_t size)
{
    for (size_t i = 1; i < size; i++)
    {
        size_t j = i;
        while (j > 0 && p[j - 1] > p[j])
        {
            swap(p + j, p + j - 1);
            j--;
        }
    }
}

int main(void)
{
    printf("\nInsertion Sort example with an array of %d elements\n\n", SIZE);

    int a[SIZE];

    randomize();

    generateRandomIntArray(a, SIZE, MAX);

    printArray(a, SIZE);

    insertionSort(a, SIZE);

    printArray(a, SIZE);
}