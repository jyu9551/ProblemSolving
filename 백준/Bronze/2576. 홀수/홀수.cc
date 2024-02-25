#include <bits/stdc++.h>
using namespace std;
int in[7];
vector <int> m;
int sum;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i=0; i<7; i++) {
		cin >> in[i];
		if (in[i] % 2 == 1) {
		 sum += in[i]; 
		 m.push_back(in[i]);
		}
	}
	
	if (sum == 0) cout << -1;	
	else cout << sum << '\n' << *min_element(m.begin(), m.end());;
}