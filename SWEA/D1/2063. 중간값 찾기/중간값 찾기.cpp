#include <bits/stdc++.h>
using namespace std;
vector<int> a;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	for(int t=0; t<T; t++){		
		int tmp; cin >> tmp;
		a.push_back(tmp);
	}
	sort(a.begin(), a.end());
	cout << a[T/2];	
}
