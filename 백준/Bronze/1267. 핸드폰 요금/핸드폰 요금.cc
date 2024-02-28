#include <bits/stdc++.h>
using namespace std;
int T, t;

int Y, M;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> T;
	for (int t=0; t<T; t++) {
		int time;
		cin >> time;
		
		Y += (time/30 + 1) * 10;
		M += (time/60 + 1) * 15;
	}

	if (Y > M) cout << "M " << M;
	else if (Y < M) cout << "Y " << Y;
	else cout << "Y M " << M;

}