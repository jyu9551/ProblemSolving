#include <bits/stdc++.h>
using namespace std;

int main(){
	int T; cin >> T;
	for(int t=1; t<=T; t++){
		int cnt[102] = {0, };
		int N; cin >> N;
		for(int n=0; n<1000; n++){
			int tmp; cin >> tmp;
			cnt[tmp]++;		
		} 
		int mx = -1;
		int mx_idx;
		for(int i=1; i<=100; i++){
			if (cnt[i] >= mx) {
				mx = cnt[i];
				mx_idx = i;
			}
		}
		cout << '#' << t << ' ' << mx_idx << '\n';  		
	}	
}
