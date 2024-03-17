#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

char board[1002][1002];
int n,m,result=10000;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int fire[1002][1002];
int jihun[1002][1002];


int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	
	queue<pair<int, int>> Q;
	queue<pair<int, int>> Q2;

	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++) {
			cin >> board[i][j];
			if (board[i][j]=='F') {
				Q.push({i,j});
				fire[i][j] = 0;
			}
			else fire[i][j] = -1;
			
			if (board[i][j]=='J') {
				if (i==0 || i==n-1 || j==0 || j==m-1) result = 0;
				Q2.push({i,j});
				jihun[i][j] = 0;
			}
			else jihun[i][j] = -1;			
		}
	}
					
	while(Q.size()){
		pair<int,int> cur = Q.front(); Q.pop();
		for (int dir=0; dir<4; dir++){
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx >= n || nx < 0 || ny >= m || nx < 0) continue;
			if (fire[nx][ny]!=-1 || board[nx][ny]=='#') continue;
			Q.push({nx,ny});
			fire[nx][ny] = fire[cur.X][cur.Y] + 1;
		}
	}
			
//	for (int i=0; i<n; i++){
//		for (int j=0; j<m; j++) {
//			cout << fire[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	cout << endl;
								
	
	while(Q2.size()){
		pair<int,int> cur = Q2.front(); Q2.pop();
		for (int dir=0; dir<4; dir++){
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx >= n || nx < 0 || ny >= m || nx < 0) continue;
			if (jihun[nx][ny]!=-1 || board[nx][ny]=='#') continue;
			if (fire[nx][ny]!=-1) if (fire[nx][ny] <= jihun[cur.X][cur.Y] + 1) continue;
			Q2.push({nx,ny});
			jihun[nx][ny] = jihun[cur.X][cur.Y] + 1;
			if (nx==0 || nx==n-1 || ny==0 || ny==m-1) result = min(result, jihun[nx][ny]);
		} 	
	}

//	for (int i=0; i<n; i++){
//		for (int j=0; j<m; j++) {
//			cout << jihun[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	cout << endl;
	
	
	if (result == 10000) cout << "IMPOSSIBLE";
	else cout << result+1;	
}