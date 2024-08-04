#include "bits/stdc++.h"
using namespace std;

int d[1000001][3];
int s[1000001];
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	for (int i=1; i<=T; i++){
		cin >> s[i];
	}
	d[1][1] = s[1];
	d[2][1] = s[2];
	d[2][2] = s[1] + s[2];
	
	for (int i=1; i<=T; i++){
		d[i][1] = max(d[i-2][1], d[i-2][2]) + s[i];
		d[i][2] = d[i-1][1] + s[i];
	}
	cout << max(d[T][1], d[T][2]);
}