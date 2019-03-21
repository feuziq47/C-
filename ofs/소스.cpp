#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void fileLoad() {
	int Age;
	string Name;
	string fileName = "friend.txt";
	ifstream ifs;

	ifs.open(fileName.c_str());

	if (!ifs) {
		cout << "������ �� �� ����" << endl;
		exit(0);
	}

	cout << "\n==List of your friends from the stored file==\n";

	while (ifs >> Name >> Age) {
		cout << Name << " " << Age << endl;
	}
	ifs.close();
}


int main() {
	ofstream ofs;
	string str = "ģ�� 3���� �̸��� ���̸� �Է�";

	ofs.open("friend.txt"); //���� ���� ������ �����.

	if (!ofs) {
		cout << "���� �� �� ����." << endl;	//���� ���⿡ ������ ���
		exit(0);
	}

	cout << str << endl;
	for (int i = 0; i < 3; i++) {
		int age;
		string name;
		cout << "�̸�: ";
		cin >> name;
		cout << "����: ";
		cin >> age;
		ofs << name << " " << age << endl;
	}
	ofs.close(); //���ϴݱ�

	fileLoad();

}