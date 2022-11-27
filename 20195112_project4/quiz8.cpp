//p.591 no4
#include <iostream>
using namespace std;
template <class T>
T getSmallest(T arr[], int n) {
	double z=100;
	for (int i = 0; i < n; i++) {
		if (arr[i] < z)
			z = arr[i];
	}
	return z;
}
int main() {
	double list[] = { 1.2,3.3,9.0,1.5,8.7 };
	double a;
	a = getSmallest(list, 5);
	cout << "ÃÖ¼Ò°ª : " << a << endl;
}