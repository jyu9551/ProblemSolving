#include "bits/stdc++.h"
using namespace std;

int d[1000001][3];
int R[1000001];
int G[1000001];
int B[1000001];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	for (int i=1; i<=T; i++){
		cin >> R[i] >> G[i] >> B[i];
	}
	d[1][0] = R[1];	// 1
	d[1][1] = G[1];	// 100
	d[1][2] = B[1];	// 100

//	d[2][0] = min(d[1][1], d[1][2]) + R[2];
//	d[2][1] = min(d[1][0], d[1][2]) + G[2];
//	d[2][2] = min(d[1][0], d[1][1]) + B[2];

	
	for (int i=2; i<=T; i++){
		d[i][0] = min(d[i-1][1], d[i-1][2]) + R[i];
		d[i][1] = min(d[i-1][0], d[i-1][2]) + G[i];
		d[i][2] = min(d[i-1][0], d[i-1][1]) + B[i];
	}
	cout << *min_element(d[T], d[T]+3);
}