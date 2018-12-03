#define _CRT_SECURE_NO_WARNINGS 1
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) 
{
    struct ListNode* cur = head;
    struct ListNode* _next;
    struct ListNode* prev = NULL;
    while(cur)
    {
        if(cur->val == val)
        {
            _next = cur->next;
            free(cur);
            cur = _next;
            if(prev == NULL)
            {
                head = head->next;
                
            }
            else
            {
                prev->next = _next;
            }
        }
        else
        {
            prev = cur;
            cur = cur->next;
        }
    }
    return head;
}


/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) 
    {
        struct ListNode* cur = pHead;
        struct ListNode* curnext;
        struct ListNode* code;
        struct ListNode* codenext;
        struct ListNode* curnextnext;


        while(cur && curnext)
        {
            while(cur->val < x)
            {
                code = cur;
                codenext = code->next;
                curnext= cur->next;
                cur = curnext;
                
                
            }
            
            curnext= cur->next;
            
            
                
                while(curnext->val < x)
                {
                    curnextnext = curnext->next;
                    cur->next = curnextnext;
                    code->next = curnext;
                    curnext->next = codenext;
                    code = curnext;
                    curnext = curnextnext;
                }
            cur = curnext;
                
            
        }
        return pHead;
    }
    
};

//struct ListNode* reverseList(struct ListNode* head) 
//{
//    struct ListNode* cur = head;
//    struct ListNode* newhead;
//    struct ListNode* code;
//    while(cur)
//    {
//        if(cur == head)
//        {
//            newhead = cur;
//            newhead->next = NULL;
//            cur = cur->next;
//        }
//        else
//        {
//        code = cur;
//        code->next = newhead;
//        
//        cur = cur->next;
//        }
//    }
//    return newhead;
//    
//    
//    
//}