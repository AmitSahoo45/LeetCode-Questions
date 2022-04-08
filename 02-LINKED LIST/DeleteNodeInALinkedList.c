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

void deleteNode(struct ListNode *node)
{
    struct ListNode *ptr = node->next;
    node->val = ptr->val;
    node->next = ptr->next;
    free(ptr);
}