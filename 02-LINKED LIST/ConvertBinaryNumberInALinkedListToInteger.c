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

struct ListNode {
    int val;
    struct ListNode *next;
};


int getDecimalValue(struct ListNode *head)
{
    if (head == NULL)
        return 0;

    struct ListNode *p = head;
    int ctr = 0;
    while (p)
    {
        ctr++;
        p = p->next;
    }
    free(p);

    struct ListNode *q = head;
    int sum = 0;
    while (q)
    {
        if (q->val == 1)
        {
            sum = sum + pow(2, (ctr - 1));
        }
        q = q->next;
        ctr--;
    }
    return sum;
}

int main()
{

    return 0;
}