#include <bits/stdc++.h>
using namespace std;
map <int,int> A;
map <int,int> B;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n; cin >> n;
	while (n--){
		long long tmp; cin >> tmp;
		if (tmp >= 0) A.insert({tmp, 1});
		else B.insert({-tmp, 1});
	}
	int m; cin >> m;
	while (m--){
		long long tmp; cin >> tmp;
		if (tmp >= 0) cout << A[tmp] << '\n';
		else cout << B[-tmp] << '\n';
	}	
}
