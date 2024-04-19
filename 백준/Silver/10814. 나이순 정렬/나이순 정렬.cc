#include <bits/stdc++.h>
using namespace std;
vector<pair<int, string>> a;

bool cmp(pair<int, string> a, pair<int, string> b) {return a.first < b.first;}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	while(T--){
		int tmp;
		string tmp_str;
		cin >> tmp >> tmp_str;
		a.push_back({tmp, tmp_str});
	}
	
	stable_sort(a.begin(), a.end(), cmp);
	for (auto i:a) cout << i.first << ' ' << i.second << '\n';
}
