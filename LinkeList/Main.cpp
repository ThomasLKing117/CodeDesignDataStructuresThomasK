#include "UnorderedLinkedList.h"

int main()
{
	UnorderedLinkedList<int>* List = new UnorderedLinkedList<int>();
	List->pushFront(1);
	List->pushLast(2);
	List->pushFront(3);
	List->pushLast(4);
	return 0;
}