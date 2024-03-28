#include <bits/stdc++.h>
using namespace std;
int A[10000002];
int B[10000002];
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int N; cin >> N;
	while(N--){
		long long x; cin >> x;
		if (x >= 0) A[x]++;
		else B[-x]++;
	}
	int M; cin >> M;
	while(M--){	
		long long x; cin >> x;
		if (x >= 0) cout << A[x] << ' ';
		else cout << B[-x] << ' ';
	}
}
