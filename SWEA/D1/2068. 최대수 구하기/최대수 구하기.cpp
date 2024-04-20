#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	for(int t=0; t<T; t++){		
		int mx = -1;
		for (int i=0; i<10; i++){
			int tmp; cin >> tmp; 			
			if (mx < tmp) mx = tmp; 
		}
		 cout << '#' << t+1 << ' ' << mx << "\n";			
	}
}
