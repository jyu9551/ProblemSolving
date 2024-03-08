#include <bits/stdc++.h>
using namespace std;
int cnt[2][7];
int N,K,S,Y, result;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> N >> K;
	for (int i=0; i<N; i++){
		cin >> S >> Y;
		cnt[S][Y]++;
	}
	for (int i=0; i<2 ; i++){
		for (int j=1; j<7; j++){
			result += (cnt[i][j]+(K-1))/K;
		}
	}
	cout << result;
}