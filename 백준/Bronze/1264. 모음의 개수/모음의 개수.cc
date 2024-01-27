#include "iostream"
#include <iomanip>
#include <string>
using namespace std;

int main(void) {
	
	while (1) {
		string a;
		getline(cin, a);
		if (a == "#")	break;

		int cnt = 0;
		for (int i = 0; i < a.length(); i++) {
			if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'
				|| a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') {
			
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}