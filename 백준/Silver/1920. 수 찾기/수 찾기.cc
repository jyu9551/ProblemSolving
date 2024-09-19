#include "bits/stdc++.h"
using namespace std;

map<int,int> mp;

int main(){
	ios::sync_with_stdio(0);	cin.tie(0);
	int N;	cin >> N;
	while(N--){
		int tmp; cin >> tmp;
		mp.insert({tmp, 1});
	}
	
	int M;	cin >> M;
	while(M--){
		int tmp; cin >> tmp;
		cout << mp[tmp] << '\n';
	}
}