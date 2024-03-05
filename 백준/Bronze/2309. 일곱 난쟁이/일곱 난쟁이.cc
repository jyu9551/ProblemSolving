#include <bits/stdc++.h>
using namespace std;
int height[9], total;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	for (int i=0; i<9; i++) {
		cin >> height[i];
		total += height[i];
	}
	sort(height, height+9);
	
	do {
		int sum = 0;
		for (int i=0; i<7; i++) sum += height[i];
		if (sum == 100) break;
	
	} while (next_permutation(height, height+9));
	
	for (int i=0; i<7; i++) cout << height[i] << '\n';
}