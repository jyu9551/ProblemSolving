#include <bits/stdc++.h>
using namespace std;
int T;

bool cmp(pair<long long, string> a, pair<long long, string> b){
	return a.first > b.first;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> T;
	while(T--){
		int n; cin >> n;
		vector<pair<long long,string>> A;
 		while(n--){
			long long a; string b;
			cin >> a >> b;
			A.push_back({a,b});	
		}	
		sort(A.begin(), A.end(), cmp);
		cout << A[0].second << '\n';
	}
	
	
}
