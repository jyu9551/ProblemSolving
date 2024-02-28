#include <bits/stdc++.h>
using namespace std;
int in[9];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
		
	for (int i=0; i<9; i++) cin >> in[i];
	
	int max = *max_element(in , in+9);
	auto px = max_element(in , in+9) - in;
	cout << max << '\n' << px + 1; 	
		
}