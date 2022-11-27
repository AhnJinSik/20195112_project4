//p.476 no.3
#include <iostream>
#include <string>
using namespace std;
class Employee {
	string name;
	int salary;
public:
	Employee(string n, int s) {
		this->name = n;
		this->salary = s;
	}
	int computeSalary() {
		return salary;
	}
};

class Manager : public Employee {
	int bonus;
public:
	Manager(string n, int s, int b) : Employee(n, s) {
		this->bonus = b;
	}
	int computeSalary() {
		return Employee::computeSalary()+bonus;
	}
};

int main(){
	Manager a("±èÃ¶¼ö", 200, 100);
	cout << a.computeSalary() << endl;
}