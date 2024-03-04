#include <bits/stdc++.h>
using namespace std;
int psum[100004];
int N, K, in, maximum=-1e9;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);	
	cin >> N >> K;
	for (int i=1; i<=N; i++) {
		cin >> in;
		psum[i] = psum[i-1] + in;
	}
	for (int i=K; i<=N; i++){
		if (maximum <= psum[i]-psum[i-K]) maximum = psum[i]-psum[i-K];
	}
	cout << maximum;	
}