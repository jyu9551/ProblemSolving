#include <bits/stdc++.h>
using namespace std;

int main(){
	int T; cin >> T;
	for(int t=1; t<=T; t++){
		deque<int> a;
		long long res = 0;
		int N; cin >> N;
		for(int n=0; n<N; n++){
			int tmp; cin >> tmp;
			a.push_back(tmp);		
		} 
		while(a.size()){
			int mx_idx = max_element(a.begin(), a.end()) - a.begin();
			int mx = *max_element(a.begin(), a.end());
			for (int i=0; i<=mx_idx; i++){
				res += (mx - a[0]);
				a.pop_front();
			}
		}
		cout << '#' << t << ' ' << res << '\n';
	}
}