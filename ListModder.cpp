#include <iostream>
#include <vector>

using namespace std;

int listSummer(vector <int> list) {
	// adds all the numbers in the vector up and returns the result
	int sum = 0;

	for (int i = 0; int < list.size(); i++) {
		sum += list[i];
	}

	return sum;
}

int listProduct(vector <int> list) {
	// multiplies all the numbers in the vector together and returns the result
	int product = 1;

	for (int i = 0; int < list.size(); i++) {
		product *= list[i];
	}

	return product;
}

int main{
	vector<int> InputList;
	int temp;
	CountSort x;
	RadixSort y;

	// takie inputs
	while (cin >> temp) {
		InputList.push_back(temp);
	}

	cout << listSummer(InputList);
	cout << listProduct(InputList);
 }
