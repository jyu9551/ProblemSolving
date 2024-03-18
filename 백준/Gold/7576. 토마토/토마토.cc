#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[1002][1002];
int ripe[1002][1002];
int n,m,result;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> m >> n;
	queue<pair<int,int>> Q;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cin >> board[i][j];
			if (board[i][j] == 1) {
				ripe[i][j] = 0;
				Q.push({i,j});
			}
			else ripe[i][j] = -1;
		}	
	}

	while(Q.size()){
		pair<int,int> cur = Q.front(); Q.pop();
		for(int i=0; i<4; i++){
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];
			
			if (nx>=n || ny>=m || nx<0 || ny<0) continue;
			if (board[nx][ny]==-1 || ripe[nx][ny]!=-1) continue;
			Q.push({nx,ny});
			ripe[nx][ny] = ripe[cur.X][cur.Y] + 1;
			result = ripe[nx][ny];
		}
	}

	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			//cout << board[i][j] << ' ';
			if (board[i][j]==0 && ripe[i][j]==-1) result = -1;
		}
//		cout << endl;
	}
	cout << result;
}
