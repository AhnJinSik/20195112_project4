//p.592 n.7
#include <iostream>
using namespace std;

template <typename T>
class Circle{
	T x;
	T y;
	T r;
public:
	Circle(): x(x),y(y),r(r) {}
	~Circle() {}
	T area() {
		return r * r * 3.14;
	}
};
int main() {
	Circle<double> circleA(0.0, 0.0, 10.0);
	cout << "¸éÀû : " << circleA.area() << endl;
	return 0;
}