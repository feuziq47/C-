#include <iostream>
using namespace std;

int n;
void set() {
	::n = 10;
}

namespace konkuk {
	int n;
	void set() {
		konkuk::n = 20;
	}
	namespace student {
		int n;
		void set() {
			n = 30;
		}
	}
}

namespace konkuk {
	void set2() {
		n = 3833;
	}
}

namespace google {
	int n;
	void set() {
		google::n = 30;
	}
}

int main() {
	::set();
	konkuk::set();
	google::set();
	konkuk::student::set();

	cout << ::n << endl;
	cout << konkuk::n << endl;
	cout << google::n << endl;
	konkuk::set2();
	cout << konkuk::n << endl;
	cout << konkuk::student::n << endl;

	return 0;
}	