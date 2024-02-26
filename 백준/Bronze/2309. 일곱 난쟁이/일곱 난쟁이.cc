#include <bits/stdc++.h>
using namespace std;
int in[9];
int total;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i=0; i<9; i++) {
		cin >> in[i];
		total += in[i];	
	}
	
	for (int i=0; i<9; i++){
		for (int j=i+1; j<9; j++){
			if (total - (in[i]+in[j]) == 100){
				in[i] = 100;
				in[j] = 100;
				
				sort(in, in + 9);
				for (int i=0; i<7; i++) cout << in[i] << '\n';
				return 0;
			}
		}
	}
}