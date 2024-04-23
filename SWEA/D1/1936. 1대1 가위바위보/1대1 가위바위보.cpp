#include <bits/stdc++.h>
using namespace std;
char res;
int main(){
	int a,b; cin >> a >> b;
	if (a==1){
		if (b==2) res = 'B';
		else res = 'A';
	}
	else if (a==2){
		if (b==1) res = 'A';
		else res = 'B';
	}
	else {
		if (b==1) res = 'B';
		else res = 'A';
	}
	cout << res;
}
