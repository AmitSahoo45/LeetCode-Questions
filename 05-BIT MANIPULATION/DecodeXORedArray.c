#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *decode(int *encoded, int encodedSize, int first, int *returnSize)
{
    *returnSize = encodedSize + 1;
    int *a = (int *)malloc(*returnSize * sizeof(int));
    a[0] = first;
    for (int i = 0; i < encodedSize; i++)
    {
        a[i + 1] = encoded[i] ^ a[i];
    }

    return a;
}

int main()
{

    return 0;
}