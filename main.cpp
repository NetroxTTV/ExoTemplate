#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <set>


int Vector() {

	std::vector<int> vectorList = {5,2,9,1,5,6};
	vectorList.push_back(10);
	vectorList.push_back(3);

	vectorList.erase(vectorList.begin() +2);

	sort(vectorList.begin(), vectorList.end());

	for (const int &number : vectorList) {
		std::cout << number << ' ';
	}

	return 0;
}

int List() {
	std::list<int> listList = { 5,2,9,1,5,6 };
	listList.push_back(10);
	listList.push_back(3);

	listList.remove(9);
	listList.sort();

	for(int num : listList) {
		std::cout << num << ' ';
	}

	return 0;
}

int Set() {
	std::set<int> setList = { 5,2,9,1,5,6 };
	setList.insert(10);
	setList.insert(3);

	setList.erase(5);

	for (const int &number : setList) {
		std::cout << number << ' ';
	}

	return 0;
}



int main() {
	Vector();
	List();
	Set();
	return 0;
}