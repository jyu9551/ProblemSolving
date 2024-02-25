#include <bits/stdc++.h>
using namespace std;
int in[5];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i=0; i<5; i++) {
		cin >> in[i];
	}
	sort(in, in+5);
	int sum = accumulate(in, in+5, 0);
	
	cout << sum/5 << '\n' << in[2];	
}