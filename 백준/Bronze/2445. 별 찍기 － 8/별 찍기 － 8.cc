#include <bits/stdc++.h>
using namespace std;
int T;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> T;
	for (int i=0; i<T-1; i++){
		for (int j=0; j<=i; j++) cout << '*';
		for (int j=(T-i-1)*2; j>0; j--) cout << ' ';
		for (int j=0; j<=i; j++) cout << '*';
				
		cout << '\n';
	}	
	
	for (int i=0; i<T; i++){
		for (int j=T-i; j>0; j--) cout << '*';						
		for (int j=0; j<i*2; j++) cout << ' ';
		for (int j=T-i; j>0; j--) cout << '*';						

		cout << '\n';
	}	
}