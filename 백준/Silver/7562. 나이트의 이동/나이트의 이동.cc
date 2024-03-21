#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int dx[8] = {2, 1, -1, -2, -2, -1,  1,  2};
int dy[8] = {1, 2,  2,  1, -1, -2, -2, -1};

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	while(T--) {
		int board[302][302];
		int vis[302][302];
		int n,m;
		cin >> n; m = n;
		
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				board[i][j] = 0;
				vis[i][j] = -1;
			}
		}
		queue<pair<int, int>> Q;
		int tmp1, tmp2; cin >> tmp1 >> tmp2;
		int tmp3, tmp4; cin >> tmp3 >> tmp4;
		Q.push({tmp1, tmp2}); vis[tmp1][tmp2] = 0;
		
		while(Q.size()){
			pair<int,int> cur = Q.front(); Q.pop();
			for(int i=0; i<8; i++){
				int nx = dx[i] + cur.X;
				int ny = dy[i] + cur.Y;
						
				if (nx>=n || ny>=m || nx<0 || ny<0) continue;
				if (vis[nx][ny]!=-1) continue;
//				if (nx==tmp3 && ny==tmp4) break;
				vis[nx][ny] = vis[cur.X][cur.Y] + 1;
				Q.push({nx, ny});
			}
		}
		cout << vis[tmp3][tmp4] << '\n';			
	}
}