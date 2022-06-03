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

bool hasCycle(struct ListNode *head) {
  if(head == NULL || head->next==NULL)
    return false;
  
    struct ListNode *first=head;
    struct ListNode *second=head;
    while(first->next && first->next->next)
    {
      first = first->next->next;
      second = second->next;
      if(first== second)
        return true;
    }
  
    return false;
}