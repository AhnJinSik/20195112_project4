//p.434 no.3
#include <iostream>
#include <string>
using namespace std;
class Box
{
private:
	double length, width, height,volume;
public:
	Box(double l = 0.0, double w = 0.0, double h = 0.0)
		: length{ l }, width{ w }, height{ h }, volume{l*w*h} {	}
	
	void display() {
		cout << "������ ���� : " << length << endl;
		cout << "������ �ʺ� : " << width << endl;
		cout << "������ ���� : " << height << endl;
		cout << "������ ���� : " << volume<< endl;
	}
	void operator < (const Box& bb) {
		if (this->volume < bb.volume)
			cout << "true";
		else 
			cout << "false";
	}
};

int main()
{
	cout << "����#1" << endl;
	Box a(10, 10, 10);
	a.display();

	cout << "����#2" << endl;
	Box b(20,20,20);
	b.display();

	a.operator<(b);

	return 0;
}