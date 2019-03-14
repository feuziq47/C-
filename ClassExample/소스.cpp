#include<iostream>
using namespace std;
class Date {
private:
	int year;
	int month;
	int day;


public:
	void setDate(int yy, int mm, int dd) {
		year = yy;
		month = mm;
		day = dd;
	}

	void display() {
		cout << year << "." << month << "." << day << endl;
	}
};

void main2(void) {
	Date birthday;
	birthday.setDate(1999, 11, 22);
	birthday.display();
}