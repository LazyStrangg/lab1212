#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono;

void Timer() {
	int hours = 0, minutes = 0, seconds = 0;
	while (true) {
		cout << hours << ":" << minutes << ":" << seconds;
		seconds++;
		if (seconds == 60) {
			seconds = 0;
			minutes++;
		}
		if (minutes == 60) {
			minutes = 0;
			hours++;
		}
		this_thread::sleep_for(0.999s);
		system("cls");
	}
}

int main()
{

	Timer();
}
