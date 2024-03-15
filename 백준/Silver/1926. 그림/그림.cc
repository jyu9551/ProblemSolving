#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[502][502];
int vis[502][502];
int n,m;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int cnt, area, area_max;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++) cin >> board[i][j];
	}
	
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++) {
			if (vis[i][j] || board[i][j]==0) continue;
			queue<pair<int, int>> Q;
			Q.push({i,j});
			vis[i][j] = 1;
			cnt++;
			area = 1;
							
			while(Q.size()){
				pair<int,int> cur = Q.front(); Q.pop();
				for (int dir=0; dir<4; dir++){
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];
					if (nx >= n || nx < 0 || ny >= m || nx < 0) continue;
					if (vis[nx][ny] || board[nx][ny] == 0) continue;
					vis[nx][ny] = 1;
					Q.push({nx,ny});
					area++;					
				}
			}
			area_max = max(area_max, area);
		}
	}
	cout << cnt << '\n' << area_max;
}
