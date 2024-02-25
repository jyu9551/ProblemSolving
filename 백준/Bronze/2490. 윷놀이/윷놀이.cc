#include <bits/stdc++.h>
using namespace std;
int a[4];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i=0; i<3; i++){
		cin >> a[0] >> a[1] >> a[2] >> a[3];
		int cnt = 0;
		for (int j=0; j<4; j++){
			if (a[j] == 0) cnt++;
		}
		
		switch(cnt){
			case 1: cout << 'A' << '\n';
					break;
			case 2: cout << 'B' << '\n';
					break;
			case 3: cout << 'C' << '\n';
					break;
			case 4: cout << 'D' << '\n';
					break;
			default: cout << 'E' << '\n';
		}
	}
	
}