#include <iostream>

#include "../DataStructures/Chapter1-ArraysAndStrings.h"
#include "../DataStructures/Chapter2-LinkedLists.h"

int main() {

	//std::cout << __PRETTY_FUNCTION__ << "\n";
		
	{
		using namespace Arrays_Strings;
		array_string_test();
	}

	{
		using namespace LinkedList;
		linked_list_test();
	}

	return 0;
}