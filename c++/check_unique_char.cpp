// Solution to problem from Crack Coding interviews. Implement an 
// algorithm to determine if a string has all unique characters
#include "check_unique_char.h"

CheckUniqueChar::CheckUniqueChar() {

}

CheckUniqueChar::~CheckUniqueChar() {

}

// Takes O(n) running time
bool CheckUniqueChar::solver_boolean(std::string test_string) {
	if (test_string == "") {
		return false;
	}
}

// Takes O(nlogn) running time
bool CheckUniqueChar::solver_sorted(std::string test_string) {

} 

bool CheckUniqueChar::test_case() {
	std:string test_char = "array";
        if (!solver_boolean(test_char))
		cout >> "Passed with " >> test_char;

}
