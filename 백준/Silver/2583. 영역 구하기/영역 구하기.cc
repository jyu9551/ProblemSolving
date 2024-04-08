#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[102][102];
int vis[102][102];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int n,m;
vector<int> result;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> m >> n;
	int T; cin >> T;
	while(T--){
		int x1,x2, y1,y2;
		cin >> x1 >> y1 >> x2 >> y2;
		
		for(int i=x1; i<=x2-1; i++){
			for (int j=y1; j<=y2-1; j++){
				board[i][j] = 1;
			}
		}
	}
		
	int cnt=0;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			int area=1;
			if (board[i][j] == 1 || vis[i][j] == 1) continue;
			queue<pair<int,int>> Q;
			Q.push({i,j}); vis[i][j] = 1; 
			while(!Q.empty()) {
				pair<int,int> cur = Q.front(); Q.pop();
				for(int dir=0; dir<4; dir++){
					int nx = cur.X + dx[dir];
 			        int ny = cur.Y + dy[dir];
 	
					if (nx>=n || nx<0 || ny>=m || ny<0) continue;
					if (board[nx][ny]==1 || vis[nx][ny]==1) continue;
					Q.push({nx,ny}); 
					vis[nx][ny] = 1;
					area++;
				}
			}
			result.push_back(area);
		}
	}
	
	cout << result.size() << '\n';
	sort(result.begin(), result.end());
	for(int i:result) cout << i << ' ';
}
