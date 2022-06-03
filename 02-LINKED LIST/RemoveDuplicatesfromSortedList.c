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

struct ListNode *deleteDuplicates(struct ListNode *head)
{
    if (head)
    {
        struct ListNode *qtr = head;
        while (qtr->next)
        {
            if (qtr->val == qtr->next->val)
            {
                struct ListNode *ptr = qtr->next;
                qtr->next = qtr->next->next;
                free(ptr);
            }
            else
                qtr = qtr->next;
        }
    }
    return head;
}
