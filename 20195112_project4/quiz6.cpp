//p.514 no.2
#include <iostream>
using namespace std;
class Weapon {
public:
	virtual void load() = 0;

};
class Bomb : public Weapon {
public:
	void load() {
		cout << "��ź�� �����մϴ�" << endl;
	}
};
class Gun : public Weapon {
public:
	void load() {
		cout << "���� �����մϴ�" << endl;
	}
};
int main() {
	Bomb a;
	Weapon& a1 = a;
	a1.load();

	Gun b;
	Weapon& a2 = b;
	a2.load();
}