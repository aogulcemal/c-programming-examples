#include "helpers.h"

void randomize(void)
{
    srand((unsigned)time(NULL));
}

void generateRandomIntArray(int *p, size_t size, size_t max)
{
    while (size--)
        *p++ = rand() % max;
}

void printArray(const int *p, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        if (i && i % 20 == 0)
            printf("\n");
        printf("%3d ", p[i]);
    }
    printf("\n-------------------------------------------------------------------------------\n");
}

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int *getArrayMin(const int *p, size_t size)
{
    int *pmin = (int *)p;

    for (size_t i = 1; i < size; i++)
        if (p[i] < *pmin)
            pmin = (int *)p + i;

    return pmin;
}