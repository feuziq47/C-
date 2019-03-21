#include <iostream>
#include <string>
using namespace std;
int main() {
	string s1 = "C++ Programming Practice";
	string s2 = "Programming";
	s1.erase(4, 12);
	cout << s1 << endl;
	s1.insert(4, s2);
	cout << s1 << endl;
	s1.replace(4, 11, "Programming ");
	cout << s1 << endl;

	int i;
	i = s1.length();
	cout << "Length : " << i << endl;
}