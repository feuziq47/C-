#include <iostream>
using namespace std;

class TV {
private:
	bool powerOn;
	int channel;
	int volume;
	
public:
	void on() {
		powerOn = true;
		cout << "TV�� �׽��ϴ�." << endl;
	}
	void off() {
		powerOn = false;
		cout << "TV�� �����ϴ�." << endl;
	}
	void setChannel(int cnl) {
		if (powerOn) {
			if (cnl > 1 && cnl <= 100) {
				channel = cnl;
				cout << "ä����" << cnl << "(��)�� �ٲ���ϴ�." << endl;
			}
			else {
				cout << "���� ä���Դϴ�." << endl;
			}
		}
		else {
			cout << "TV�� �Ѽ���." << endl;
		}
	}
	void setVolume(int vol) {
		if (powerOn) {
			if (vol > 1 && vol <= 100) {
				volume = vol;
				cout << "������" << vol << "(��)�� �ٲ���ϴ�." << endl;
			}
			else {
				cout << "���� �����Դϴ�." << endl;
			}
		}
		else {
			cout << "TV�� �Ѽ���." << endl;
		}
	}
};

int main() {
	TV lg;
	lg.on();
	lg.setChannel(10);
	lg.setVolume(101);
}