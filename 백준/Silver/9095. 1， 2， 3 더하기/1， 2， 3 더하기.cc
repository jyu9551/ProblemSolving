#include "bits/stdc++.h"
using namespace std;

int d[1000001];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	d[1] = 1;
	d[2] = 2;
	d[3] = 4;

	while(T--){
		int tmp; cin >> tmp;
		for (int i=4; i<=tmp; i++){
			d[i] = d[i-1] + d[i-2] + d[i-3];
		}
		cout << d[tmp] << '\n';
	}	
}