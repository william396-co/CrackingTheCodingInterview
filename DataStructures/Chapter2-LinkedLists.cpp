
#include "Chapter2-LinkedLists.h"

#include <unordered_set>

namespace LinkedList {

	namespace Q1 {
		namespace V1 {
			Node* DeleteDups(Node*root) {
				if (!root)return nullptr;

				std::unordered_set<int> checker;
				Node* dumy = new Node(0);
				dumy->next = root;
				auto prev = dumy;
				auto cur = dumy->next;
				while (cur) {
					if (checker.find(cur->data) != checker.end()) {
						// remove duplicate
						if (cur->next) {
							auto temp = cur;
							prev = cur->next;
							cur = prev->next;
							delete temp;
						}
						else {
							prev->next = nullptr;
							delete cur;
						}
					}
					else {
						prev = cur;
						cur = cur->next;
					}
				}

				return root;
			}
		}
	}

	namespace Q2 {
		namespace V1 {

			Node* kth2Last(Node* root, int k) {
				if (!root)return nullptr;

				Node* fast = root;
				while (--k && fast) {
					fast = fast->next;
				}

				Node* ret = root;
				if (ret && fast && fast->next) {
					ret = ret->next;
					fast = fast->next;
				}
				return ret;
			}
		}
	}

	namespace Q3 {
		namespace V1 {

			Node* deleteMidNode(Node* root) {
				if (!root)return nullptr;

				auto fast = root;
				auto slow = root;
				while (slow && fast && fast->next) {
					slow = slow->next;
					fast = fast->next->next;
				}

				return slow;
			}
		}
	}


	void linked_list_test()
	{
		{
			using namespace Q1;
		}

		{
			using namespace Q2;
		}

		{
			using namespace Q3;
		}

	}
}

