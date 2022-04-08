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

struct ListNode *mergeInBetween(struct ListNode *list1, int a, int b, struct ListNode *list2)
{
    struct ListNode *p, *q;
    p = list1;
    q = list1;
    while (a > 1)
    {
        a--;
        p = p->next;
    }

    while (b)
    {
        b--;
        q = q->next;
    }

    p->next = list2;
    while (p->next)
        p = p->next;

    p->next = q->next;

    return list1;
}