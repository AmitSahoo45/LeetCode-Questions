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

char *restoreString(char *s, int *indices, int indicesSize)
{
    char *res = malloc(indicesSize + 1);
    strcpy(res, s);
    for (int i = 0; i < indicesSize; i++)
    {
        res[indices[i]] = s[i];
    }
    return res;
}

int main()
{

    return 0;
}