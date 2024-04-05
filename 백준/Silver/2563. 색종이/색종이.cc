#include <bits/stdc++.h>
using namespace std;

int paper[101][101];

int main(){
	int T, cnt=0;
    cin >> T;
	while(T--){
		int x,y; cin >> x >> y;
		for(int i=x; i<=x+9; i++){
			for (int j=y; j<=y+9; j++){
				paper[i][j] = 1; cnt++;
			}		
		}	
	}    
	
	int result = 0;
	for(int i=0; i<=100; i++){
		for (int j=0; j<=100; j++){
		//	cout << paper[i][j] << ' ';
			if (paper[i][j] == 1) result++;
		}
	//	cout << '\n';
	}
    cout << result;
}