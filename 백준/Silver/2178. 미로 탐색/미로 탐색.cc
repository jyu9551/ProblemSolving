#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[502][502];
int n,m;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int dist[502][502];

int main(){
//	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++) {
			scanf("%1d", &board[i][j]);
			dist[i][j] = -1;
		}
	}
	
	
	queue<pair<int, int>> Q;
	Q.push({0,0});
	dist[0][0] = 0;
							
	while(Q.size()){
		pair<int,int> cur = Q.front(); Q.pop();
		for (int dir=0; dir<4; dir++){
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx >= n || nx < 0 || ny >= m || nx < 0) continue;
			if (dist[nx][ny]!=-1 || board[nx][ny]==0) continue;
			Q.push({nx,ny});
			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
		}
	}
	cout << dist[n-1][m-1]+1;	
}
