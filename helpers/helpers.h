#ifndef HELPERS_H
#define HELPERS_H

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void randomize(void);
void generateRandomIntArray(int *p, size_t size, size_t max);
void printArray(const int *p, size_t size);
void swap(int *p1, int *p2);
int *getArrayMin(const int *p, size_t size);

#endif
