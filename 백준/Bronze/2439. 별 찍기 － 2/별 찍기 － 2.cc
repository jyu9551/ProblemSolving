#include <bits/stdc++.h>
using namespace std;
int T;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> T;
	for (int i=0; i<T; i++){
		for (int j=i; j<T-1; j++){
			cout << ' ';
		}
		for (int j=i; j>=0; j--){
			cout << '*';
		}
		cout << '\n';
	}
}