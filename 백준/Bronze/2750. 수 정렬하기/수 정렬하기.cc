#include <bits/stdc++.h>
using namespace std;
vector <int> a;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n; cin >> n;
	for(int i=0; i<n; i++){
		int tmp; cin >> tmp;
		a.push_back(tmp);
	}
	sort(a.begin(), a.end());
	for(int i=0; i<n; i++){
		cout << a[i] << '\n';
	}	
}
