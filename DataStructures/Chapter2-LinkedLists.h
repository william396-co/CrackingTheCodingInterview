#pragma once
#include <forward_list>

namespace LinkedList {

	struct Node {
		int data;
		Node* next;
		explicit Node(int val) :data{ val }, next{ nullptr } {}
	};

	namespace Q1 {
		/*
		* 2.1 Remove Dups: Write code to remove duplicates from an unsorted list
		* 
		* 	FLLOW UP
		*   how would you solve this problem if a temporary buffer is not allowed?		* 
		*/
		namespace V1 {
			Node* DeleteDups(Node* root);
		}
	}

	namespace Q2 {
		/*
		* 2.2 Return Kth to Last: Implement an algorithm to find the kth to last 
		*     element of a singly linked lists
		*/
		namespace V1 {
			Node* kth2Last(Node* head, int k);
		}
	}

	namespace Q3 {
		/*
		* 2.3 Delete Middle Node: Implement an algorithm to delete a node in the 
		*     middle(i.e any node but the first and last node, not necessarily
		*     the exact middle) of singly linked list, given only access to that node.
		* 
		* EXAMPLE:
		* Input: the node c from the linked list a->b->c->d->e->f
		* Result: nothing is return, but the new linked list looks like a->b->d->e->f
		* 
		*/

		namespace V1 {
			Node* deleteMidNode(Node* root);
		}
	}


	void linked_list_test();
}