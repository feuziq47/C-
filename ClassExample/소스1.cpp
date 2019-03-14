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
		cout << "TV를 켰습니다." << endl;
	}
	void off() {
		powerOn = false;
		cout << "TV를 껐습니다." << endl;
	}
	void setChannel(int cnl) {
		if (powerOn) {
			if (cnl > 1 && cnl <= 100) {
				channel = cnl;
				cout << "채널을" << cnl << "(으)로 바꿨습니다." << endl;
			}
			else {
				cout << "없는 채널입니다." << endl;
			}
		}
		else {
			cout << "TV를 켜세요." << endl;
		}
	}
	void setVolume(int vol) {
		if (powerOn) {
			if (vol > 1 && vol <= 100) {
				volume = vol;
				cout << "볼륨을" << vol << "(으)로 바꿨습니다." << endl;
			}
			else {
				cout << "없는 볼륨입니다." << endl;
			}
		}
		else {
			cout << "TV를 켜세요." << endl;
		}
	}
};

int main() {
	TV lg;
	lg.on();
	lg.setChannel(10);
	lg.setVolume(101);
}