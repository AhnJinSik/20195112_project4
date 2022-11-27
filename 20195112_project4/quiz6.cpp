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
		cout << "ÆøÅºÀ» ÀûÀçÇÕ´Ï´Ù" << endl;
	}
};
class Gun : public Weapon {
public:
	void load() {
		cout << "ÃÑÀ» ÀûÀçÇÕ´Ï´Ù" << endl;
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