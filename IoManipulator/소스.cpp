#include <iostream>
#include <iomanip>
using namespace std;
void main() {
	for (int i = 1; i <= 1000; i *= 10)
		cout << setw(6) << i << '\n';

	system("pause");
}