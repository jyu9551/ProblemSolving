#include <bits/stdc++.h>
using namespace std;
int main(){
	int T; cin >> T;
	for (int t=0; t<T; t++){
		int table[16][16] = {0, };
		int N, M; cin >> N >> M;
		int mx = -1;
		for (int i=0; i<N; i++){
			for (int j=0; j<N; j++){
				int tmp; cin >> tmp;
				table[i][j] = tmp;
			}
		}
		int table2[N-M+1][N-M+1];
		for(int i=0; i<N-M+1; i++)
			for(int j=0; j<N-M+1; j++) table2[i][j]=0;
		
		
		for(int i=0; i<N-M+1; i++) {
			for(int j=0; j<N-M+1; j++){
		
				for (int m=0; m<M; m++){
					for (int n=0; n<M; n++){
						table2[i][j] += table[i+m][j+n];
					}
				}
				if (mx < table2[i][j]) mx = table2[i][j];
			}
		}
		cout << '#' << t+1 << ' ' << mx << '\n';
	}
}