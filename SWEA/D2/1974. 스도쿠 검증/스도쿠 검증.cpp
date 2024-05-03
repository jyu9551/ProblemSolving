#include <bits/stdc++.h>
using namespace std;
int result;
int main(){
	int T; cin >> T;
	for (int t=0; t<T; t++){
		result = 1;
		int table[9][9] = {0, };
		for (int i=0; i<9; i++){
			for (int j=0; j<9; j++){
				int tmp; cin >> tmp;
				table[i][j] = tmp;
			}
		}
		
		for (int i=0; i<9; i++){
			int row[10] = {0, };
			for (int j=0; j<9; j++){
				if (row[table[i][j]] == 1) {
					result = 0;
				}
				row[table[i][j]]++; 
			}
		}
		for (int i=0; i<9; i++){
			int c[10] = {0, };
			for (int j=0; j<9; j++){
				if (c[table[j][i]] == 1) {
					result = 0;
				}
				c[table[j][i]]++;
			}
		}
		
		for (int i=0; i<9; i+=3){
			for (int j=0; j<9; j+=3){

				int bundle[10] = {0, };
				for (int m=i; m<i+3; m++) {
					for (int n=j; n<j+3; n++) {
						if (bundle[table[m][n]] == 1) {
							result = 0;
						}						
						bundle[table[m][n]]++;
					}
				}		
			}
		}
		cout << '#' << t+1 << ' ' << result << '\n';
	}
}