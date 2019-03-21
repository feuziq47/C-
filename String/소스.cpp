#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1 = "건국대학교";	//string 타입은 클래스지만 자료형처럼 사용하기 때문에 소문자 s로 시작.
	string s2 = "C++";
	string s3 = s1+' '+s2;
	string s4 = s3 + "수업";

	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "s3: " << s3 << endl;
	cout << "s4: " << s4 << endl;
}