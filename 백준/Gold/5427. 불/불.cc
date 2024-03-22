#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
char board[1002][1002];
int fire[1002][1002];
int sg[1002][1002];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {	
	ios::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	
	while(T--) {
		queue<pair<int, int>> Q1;
		queue<pair<int, int>> Q2;		
		int n,m,result=-1;
		cin >> m >> n;
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				fire[i][j] = 0;
				sg[i][j] = 0;
			}
		}

		int tt, ttt;
		for (int i=0; i<n; i++){
			string tmp; cin >> tmp;			
			for (int j=0; j<m; j++){
				board[i][j] = tmp[j];
				if (board[i][j] == '*') {
					Q1.push({i,j});
					fire[i][j] == 0;
					sg[i][j] = -1;
				}
				else if(board[i][j] == '@'){
					Q2.push({i,j});
					sg[i][j] == 0;
					fire[i][j] = -1;
					tt = i; ttt=j;
				}
				else {
					fire[i][j] = -1;
					sg[i][j] = -1;
				}
			}
		}		
		if (tt==0 || tt==n-1 || ttt==0 || ttt==m-1) {
			cout << 1 << '\n';
			continue;
		}
//		if (Q1.empty()) {
//			for (int i=0; i<n; i++){
//				for (int j=0; j<m; j++){
//					fire[i][j] = 10000;
//				}
//			}
//		}
		
		while(Q1.size()){
			pair<int,int> cur = Q1.front(); Q1.pop();
			for(int i=0; i<4; i++){
				int nx = dx[i] + cur.X;
				int ny = dy[i] + cur.Y;
				if (nx>=n || ny>=m || nx<0 || ny<0) continue;
				if (fire[nx][ny]!=-1 || board[nx][ny]=='#') continue;
				fire[nx][ny] = fire[cur.X][cur.Y] + 1;
				Q1.push({nx, ny});
			}
		}
		int a = 0;
		while(Q2.size()){
			if (a==1) break;
			pair<int,int> cur = Q2.front(); Q2.pop();
			for(int i=0; i<4; i++){
				int nx = dx[i] + cur.X;
				int ny = dy[i] + cur.Y;
				if (nx>=n || ny>=m || nx<0 || ny<0) continue;
				if (sg[nx][ny]!=-1 || board[nx][ny]=='#') continue;
				if (sg[cur.X][cur.Y]+1 >= fire[nx][ny] && fire[nx][ny]!=-1) continue;				
				if (nx==0 || ny==0 || nx==n-1 || ny==m-1) { result = sg[cur.X][cur.Y] + 1; a = 1;}
				sg[nx][ny] = sg[cur.X][cur.Y] + 1;
				Q2.push({nx, ny});
			}
		}		
		if (result == -1) cout << "IMPOSSIBLE" << '\n';
		else cout << result+1 << '\n';
		
//		for (int i=0; i<n; i++){
//			for (int j=0; j<m; j++){
//				cout << sg[i][j] << ' ';
//			}
//			cout << '\n';
//		}
//		cout << '\n';
//		for (int i=0; i<n; i++){
//			for (int j=0; j<m; j++){
//				cout << fire[i][j] << ' ';
//			}
//			cout << '\n';
//		}			
//		cout << '\n';
 	}
	
}