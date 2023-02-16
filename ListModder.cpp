#include <iostream>
#include <vector>

using namespace std;

int listSummer(vector <int> list) {
	int sum = 0;

	for (int i = 0; i < list.size(); i++) {
		sum += list[i];
	}

	return sum;
}

int listProduct(vector <int> list) {
	int product = 1;

	for (int i = 0; i < list.size(); i++) {
		product *= list[i];
	}

	return product;
}

vector <int> reverseList(vector <int> list) {
	int items_left = list.size() - 1;
	int temp;
	for (int ii = 0; items_left > ii; ii++) {
		temp = list[ii];
		list[ii] = list[items_left];
		list[items_left] = temp;
		items_left--;
	}

	return list;
}

int main() {
	vector<int> InputList;
	int temp;

	// takie inputs
	while (cin >> temp) {
		InputList.push_back(temp);
	}

	cout << listSummer(InputList) << "\n";
	cout << listProduct(InputList) << "\n";

	vector<int> reversedList = reverseList(InputList);
	for (int i = 0; i < InputList.size(); i++) {
		cout << reversedList[i] << " ";
	}
	cout << "\n";
}
