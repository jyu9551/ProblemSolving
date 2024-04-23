#include <bits/stdc++.h>
using namespace std;
int main(){
	int T; cin >> T;
	for(int i=1; i<=T; i++){
		if (T%i==0) cout << i << ' ';
	}
}
