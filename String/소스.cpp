#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1 = "�Ǳ����б�";	//string Ÿ���� Ŭ�������� �ڷ���ó�� ����ϱ� ������ �ҹ��� s�� ����.
	string s2 = "C++";
	string s3 = s1+' '+s2;
	string s4 = s3 + "����";

	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "s3: " << s3 << endl;
	cout << "s4: " << s4 << endl;
}