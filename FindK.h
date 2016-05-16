#ifndef __FINDK_H__
#define __FINDK_H__

#include <iostream>
using namespace std;
struct ListNode
{
	int _data;
	ListNode* _next;
	
};

ListNode* FindK(ListNode* pHead, int k)
{
	if (pHead == NULL || k <= 0)
		return NULL;

	ListNode* fast = pHead;
	ListNode* slow = pHead;

	//����fast��K��
	while (fast && k--)
	{
		fast = fast->_next;
	}

	//���K����fast�Ѿ����գ�˵������Ƿ�
	if (k > 0)
	{
		throw exception("Invalid Input");
	}

	while (fast)
	{
		fast = fast->_next;
		slow = slow->_next;
	}

	return slow;
}






#endif //__FINDK_H__