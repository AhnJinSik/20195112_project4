//p.435 no.5
#include <iostream>
using namespace std;

class Time
{
	int hours, minutes;
public:
	Time() : hours(0), minutes(0) {}
	Time(int h, int m) : hours{ h }, minutes{ m } {}
	~Time() {}

	void displayTime() {
		if (minutes == 60) {
			hours++;
			minutes = 0;
		}
		cout << hours << ": " << minutes << endl;
	}
	Time& operator++() {
		++minutes;
		return *this;
	}
};

int main()
{
	Time t(10,59);
	t.displayTime();
	++t;
	t.displayTime();
	return 0;
}