#include "Chapter1-ArraysAndStrings.h"

#include <unordered_set>
#include <unordered_map>
#include <iostream>

namespace Arrays_Strings {

	namespace Q1 {

		bool isUniqueChars(std::string const& str)
		{
			std::unordered_set<char> checker;
			for (auto const& c : str) {
				if (checker.find(c) != checker.end())
					return false;
				checker.emplace(c);
			}
			return true;
		}
	}

	void array_string_test() {

		{
			using namespace Q1;

			std::unordered_map<std::string, bool> test_data_map;
			test_data_map.emplace("adnertf", true);
			test_data_map.emplace("abcdefghijklmn98375", true);
			test_data_map.emplace("ABCDEFGHIJabcdeefghi", false);

			bool all_passed = true;
			for (auto const& it : test_data_map) {
				if (isUniqueChars(it.first) != it.second) {
					std::cout << "test failed[" << it.first << "]\n";
					all_passed = false;
					break;
				}
			}
			if (all_passed) {
				std::cout << "all test case passed";
			}
		}
	}
}
