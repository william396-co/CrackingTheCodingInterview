#include "Chapter1-ArraysAndStrings.h"

#include <unordered_set>
#include <unordered_map>
#include <iostream>
#include <array>
#include <bitset>

namespace Arrays_Strings {

	namespace Q1 {
		namespace V1 {
			bool isUniqueChars(std::string const& str)
			{
				if (str.size() > 128)
					return false;

				std::unordered_set<char> checker;
				for (auto const& c : str) {
					if (checker.find(c) != checker.end())
						return false;
					checker.emplace(c);
				}
				return true;
			}
		}
		namespace V2 {
			bool isUniqueChars(std::string const& str) 
			{
				if (str.size() > 128)
					return false;

				std::array<bool, 128> checker{};
				for (auto const& c : str) {
					if (checker[c]) {
						return false;
					}
					checker[c] = true;
				}
				return true;
			}
		}
		namespace V3 {
			bool isUniqueChars(std::string const& str) 
			{
				if (str.size() > 128)
					return false;

				std::bitset<128> checker;
				for (auto const& c : str) {
					if (checker[c]) {
						return false;
					}
					checker.set(c);
				}
				
				return true;
			}
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
				if (V3::isUniqueChars(it.first) != it.second) {
					std::cout << "test failed[" << it.first << "]\n";
					all_passed = false;
					break;
				}
			}
			if (all_passed) {
				std::cout << "all test case passed";
			}
		}

		{
			using namespace Q2;

		}
	}
}
