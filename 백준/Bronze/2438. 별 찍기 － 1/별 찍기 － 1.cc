#include <bits/stdc++.h>
using namespace std;
int T;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> T;
	for (int i=0; i<T; i++){
		for (int j=0; j<=i; j++){
			cout << "*";
		}
		cout << '\n';
	}
}