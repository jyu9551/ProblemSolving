#include <bits/stdc++.h>
using namespace std;

int a[9][9], mx, x,y;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			int tmp; cin >> tmp;
			if (tmp > mx){
				mx = tmp;
				x = i;
				y = j;
			}
		}
	}	
	
	cout << mx << '\n' << x+1 << ' ' << y+1;
}
