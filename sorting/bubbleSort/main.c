#include "../helpers/helpers.h"

#define SIZE 100
#define MAX 100

void bubbleSort(int *p, size_t size)
{
    int swapCounter = -1;
    while (swapCounter)
    {
        swapCounter = 0;
        for (size_t i = 0; i < size - 1; ++i)
        {
            if (p[i] > p[i + 1])
            {
                ++swapCounter;
                swap(p + i, p + i + 1);
            }
        }
    }
}

int main(void)
{
    printf("\nBubble Sort example with an array of %d elements\n\n", SIZE);

    int a[SIZE];

    randomize();

    generateRandomIntArray(a, SIZE, MAX);

    printArray(a, SIZE);

    bubbleSort(a, SIZE);

    printArray(a, SIZE);
}