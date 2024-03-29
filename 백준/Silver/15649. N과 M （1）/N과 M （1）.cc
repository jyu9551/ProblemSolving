#include <bits/stdc++.h>
using namespace std;
vector<int> A;
vector<string> result;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int a,b; cin >> a >> b;
	for(int i=1; i<=a; i++) A.push_back(i);	
	do {
		string tmp;
		for (int i=0; i<b; i++){
			tmp += A[i] + '0';
			tmp += ' ';
		}
		result.push_back(tmp);

	} while(next_permutation(A.begin(), A.end()));
	
	result.erase(unique(result.begin(), result.end()), result.end());
	for(string i:result) cout << i << '\n';
}
