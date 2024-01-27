#include "iostream"
#include <iomanip>
#include <string>
using namespace std;

int main(void) {
	
	string name;
	int age, weight;

	while (1) {
		cin >> name >> age >> weight;

		if (name == "#" && age == 0 && weight == 0) break;

		if (age > 17 || weight >= 80) {
			cout << name << " Senior" << endl;
		}
		else {
			cout << name << " Junior" << endl;	
		}	
	}
}