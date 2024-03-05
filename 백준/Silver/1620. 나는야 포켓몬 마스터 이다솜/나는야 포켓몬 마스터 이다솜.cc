#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;
map<int, string> mp2;
int N,M;

int main(){
	ios::sync_with_stdio(0);	cin.tie(0);
	cin >> N >> M;
	
	for (int i=1; i<=N; i++){
		string tmp;
		cin >> tmp;
		mp[tmp] = i;
		mp2[i] = tmp;
	}
	
	for (int i=0; i<M;i++){
		string tmp;
		cin >> tmp;
		if (atoi(tmp.c_str()))	cout << mp2[atoi(tmp.c_str())] << '\n';			
		else cout << mp[tmp] << '\n';
	}	

}