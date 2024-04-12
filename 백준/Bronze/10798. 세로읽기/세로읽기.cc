#include <bits/stdc++.h>
using namespace std;

char a[15][15];
int mx_len;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	
	for(int i=0; i<5; i++) {
		string tmp; cin >> tmp;
		for(int j=0; j<tmp.size(); j++) {
			a[i][j] = tmp[j];
			if (mx_len < tmp.size()) mx_len = tmp.size();
		}
	}
	
	for(int i=0; i<mx_len; i++){
		for (int j=0; j<5; j++){
			if (a[j][i] == 0 || a[j][i]==NULL) continue;
			cout << a[j][i];
		}
	
	}
}