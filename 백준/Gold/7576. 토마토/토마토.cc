#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[1002][1002];
int n,m;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int day[1002][1002];

int result;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> m >> n;
	
	queue<pair<int, int>> Q;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++) {
			cin >> board[i][j];
			if (board[i][j]==1)	Q.push({i,j});
			else day[i][j] = -1;
		}
	}
									
	while(Q.size()){
		pair<int,int> cur = Q.front(); Q.pop();
		for (int dir=0; dir<4; dir++){
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx >= n || nx < 0 || ny >= m || nx < 0) continue;
			if (day[nx][ny] != -1 || board[nx][ny]==-1) continue;
			Q.push({nx,ny});
			day[nx][ny] = day[cur.X][cur.Y] + 1;
			result = max(result, day[nx][ny]);
		}
	}
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			if (board[i][j]==0 && day[i][j]==-1) result = -1;						
	
	cout << result;
}
