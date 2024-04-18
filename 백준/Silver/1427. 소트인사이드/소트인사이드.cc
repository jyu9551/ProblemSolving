#include <bits/stdc++.h>
using namespace std;
vector<int> a;

bool cmp(int a, int b) {return a > b;}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	string A; cin >> A;
	for(int i=0; i<A.size(); i++){
		a.push_back(A[i] - '0');	
	}
	sort(a.begin(), a.end(), cmp);
	for (int i:a) cout << i;
}
