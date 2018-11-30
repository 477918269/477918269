//
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//	struct ListNode* prev = NULL;
//	struct ListNode* cur = head;
//	struct ListNode* next;
//	while(cur)
//	{
//		//当前节点的值是要删除的节点
//		if(cur->val == val)
//		{
//			//先获取next节点
//			next = cur->next;
//			//当前节点释放
//			free(cur);
//			//继续看下一个节点
//			cur = next;
//			//删除的是否为头结点
//			if(prev == NULL)
//			{
//				//将头结点往后挪动
//				head = next;
//			}
//			//如果头结点不为目标
//			else 
//			{
//				//
//				prev->next = next;
//			}
//		}
//		//当前节点不需要删除
//		else
//		{
//			prev = cur;
//			cur = cur->next;
//		}
//	}
//	return head;
//}

//
//struct ListNode* removeElements(struct ListNode* head, int val) 
//{
//	struct ListNode* prev =NULL;
//	struct ListNode* next;
//	struct ListNode* cur = head;
//	while(cur)
//	{
//		if(cur->val == val)
//		{
//			next = cur->next;
//			free(cur);
//			cur = next;
//			if(prev == NULL)
//				prev = head;
//			else
//				prev->next = cur;
//				
//		}
//		else
//		{
//			prev = cur;
//			cur = cur->next;
//		}
//			
//
//	}
//	return head;
//}

//struct ListNode* reverseList(struct ListNode* head) 
//{
//	struct ListNode* prev = NULL;
//	struct ListNode* cur = head;
//	struct ListNode* nextt = head->next;
//	while(cur)
//	{
//		next = cur->next;
//		cur->next = prev;
//		prev = cur;
//		cur = next;
//	}
//	return prev;
//}

//struct ListNode* middleNode(struct ListNode* head) 
//{
//	struct ListNode* cur= head;
//	int count = 0;
//	int mid = 0;
//	while(cur)
//	{
//		count++;
//		cur = cur->next;
//	}
//	mid = count/2;
//	cur = head;
//	while(mid--)
//	{
//		cur = cur->next;
//
//	}
/*}*//*
慢指针每次移动一步，
快指针每次移动两部；
当快指针走到链表尾部，慢指针正好
走到链表中间位置                   */
//struct ListNode* middleNode(struct ListNode* head) 
//{
//	struct ListNode* slow = head;
//	struct ListNode *fast = head;
//	while(fast&&fast->next)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//	return slow;
//}
//struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
//{
//	struct ListNode* fast = head;
//	struct ListNode* slow = head;
//	while(n--)
//	{
//		if(fast)
//			fast = fast->next;
//		else
//			return NULL;
//
//	}
//	while(fast)
//	{
//		fast = fast->next;
//		slow = slow->next;
//	}
//	return slow;
//}
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
	struct ListNode* head;
	struct ListNode* tail;
	if(l1 == NULL)
	{
		return l2;

	}
	if(l2 == NULL)
	{
		return l1;
	}
	if(l1->val < l2->val)
	{
		head = l1;
		l1 = l1->next;

	}
	else
	{
		head = l2;
		l2 = 12->next;
		
	}
	tail = head;
	while(l1&&l2)
	{
		if(l1->val< l2->val)
		{
			tail->next=l1;
			l1 = l1->next;
			tail = tail->next;
		}
		else
		{
			tail->next =l2;
			l2 = l2->next
			tail = tail->next
		}
	}
	if(l1)
	{
		tail->next = l1;
	}
	if(l2)
	{
		tail->next = l2;
	}
	return head;

}
