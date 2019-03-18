#include <iostream>
using namespace std;
void main() {
	int val, sum = 0;
	cout << "Enter next number: ";
	while (cin >> val) {
		sum += val;
		cout << "Enter next number: ";
	}
	cout << "Sum of all values: " << sum << '\n';
}