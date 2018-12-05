/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

    struct ListNode* middleNode(struct ListNode* head) 
{
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}  

	/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) 
    {
        struct ListNode* fast = pListHead;
        struct ListNode* slow = pListHead;
        while(k--)
        {
            if(fast != NULL)
            {
                fast = fast->next;
            }
            else 
                slow = NULL;
        }
        while(fast)
        {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    
    }
};


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode* cur = l1;
    struct ListNode* prev = l2;
    struct ListNode* newhead = NULL;
    struct ListNode* tail ;
    struct ListNode* head;
    if(cur == NULL)
        return l2;
    if(prev == NULL)
        return l1;
    if(cur->val <= prev->val)
    {
        newhead = cur;
        cur = cur->next;
    }
    else
    {
        newhead = prev;
        prev = prev->next;
    }
     head = newhead;
    while(prev && cur)
    {
        if(cur->val <= prev->val)
        {
            newhead->next = cur;
            cur = cur->next;
            newhead = newhead->next;
        }
        else
        {
            newhead->next = prev;
            prev = prev->next;
            newhead = newhead->next;
        }
    }
    if(cur == NULL || prev != NULL)
    {
        newhead->next = prev;
    }
    if(cur != NULL || prev == NULL)
    {
        newhead->next = cur;
    }
return head;
}