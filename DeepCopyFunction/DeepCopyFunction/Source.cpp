#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
void DeepCopy(Node*, Node*);
int main()
{
	system("pause");
	return 0;
}
void DeepCopy(Node* newHead, Node* oldHead)
{
	//lets say newhead isnt even allocated yet:
	if (oldHead != nullptr)
	{
//copy head
		newHead = new Node;
		newHead->data = oldHead->data;
		newHead->next = nullptr;
		Node* currentNewHeadPtr = newHead;
		Node* currentOldHeadPtr = oldHead->next;
//copy body
		while (currentOldHeadPtr != nullptr)
		{
			Node* copy = new Node;
			copy->data = currentOldHeadPtr->data;
			copy->next = nullptr;
			currentNewHeadPtr->next = copy;
			currentNewHeadPtr = currentNewHeadPtr->next;
			currentOldHeadPtr = currentOldHeadPtr->next;
		}
	}
	else
	{
		newHead = oldHead;
	}





















}