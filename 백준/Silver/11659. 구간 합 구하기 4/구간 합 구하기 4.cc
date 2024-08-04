#include "bits/stdc++.h"
using namespace std;

int psum[100005];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int N,M; cin >> N >> M;
	cin >> psum[1];
	for(int i=2; i<=N; i++) {
		int tmp; cin >> tmp;
		psum[i] = psum[i-1] + tmp;
	}
	while(M--){
		int a,b; cin >> a >> b;
		cout << psum[b] - psum[a-1] << '\n';
	}
}