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
		cout << "파일을 열 수 없다" << endl;
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
	string str = "친구 3명의 이름과 나이를 입력";

	ofs.open("friend.txt"); //파일 열기 없으면 만든다.

	if (!ofs) {
		cout << "파일 열 수 없다." << endl;	//파일 열기에 실패한 경우
		exit(0);
	}

	cout << str << endl;
	for (int i = 0; i < 3; i++) {
		int age;
		string name;
		cout << "이름: ";
		cin >> name;
		cout << "나이: ";
		cin >> age;
		ofs << name << " " << age << endl;
	}
	ofs.close(); //파일닫기

	fileLoad();

}