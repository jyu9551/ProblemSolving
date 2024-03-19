#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
int T,n,m,k;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> T;
	while(T--){
		int board[52][52] = {0, };
		int vis[52][52] = {0, };
		int cnt=0;
		cin >> m >> n >> k;
		while(k--){
			int x,y;
			cin >> y >> x;
			board[x][y]=1;	
		}
				
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				if (board[i][j]==0 || vis[i][j]==1) continue;
								
				cnt++;
				queue<pair<int,int>> Q;
				Q.push({i,j}); vis[i][j]=1;// cout<<i<<j<<'\n';
 				while(Q.size()) {
 					pair<int,int> cur = Q.front(); Q.pop();
					for(int d=0; d<4; d++){
						int nx = cur.X + dx[d];
						int ny = cur.Y + dy[d];
						if (nx>=n || ny>=m || nx<0 || ny<0) continue;
						if (vis[nx][ny]==1 || board[nx][ny]==0) continue;
						Q.push({nx,ny});
						vis[nx][ny]=1;
					} 
				}	
			}		
		}
		cout << cnt << '\n';
	}
}	
