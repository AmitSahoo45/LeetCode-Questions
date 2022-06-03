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

struct ListNode
{
    int val;
    struct ListNode *next;
};

bool isPalindrome(struct ListNode *head)
{
    if (head == NULL)
        return true;

    struct ListNode *current = head;
    int length = 0;
    while (current != NULL)
    {
        length++;
        current = current->next;
    }
    free(current);

    int array[length];
    int i = 0;
    while (head != NULL)
    {
        array[i] = head->val;
        head = head->next;
        i++;
    }

    i = 0;
    int j = length - 1;
    int arrayCOPY[length];
    while (i < length)
    {
        arrayCOPY[i] = array[j];
        i++;
        j--;
    }

    i = 0;
    while (i < length)
    {
        if (array[i] != arrayCOPY[i])
            return false;
        i++;
    }
    return true;
}
