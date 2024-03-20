#include <bits/stdc++.h>
#define X get<0>
#define Y get<1>
#define Z get<2>

using namespace std;
int board[102][102][102];
int vis[102][102][102];
int n,m,h,mx;

int dx[6] = {1, 0, -1,  0, 0,  0};
int dy[6] = {0, 1,  0, -1, 0,  0};
int dz[6] = {0, 0,  0,  0, 1, -1};

queue<tuple<int, int, int>> Q;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> m >> n >> h;
	
	for (int i=0; i<h; i++){
		for (int j=0; j<n; j++){
			for (int k=0; k<m; k++){
				cin >> board[i][j][k];
				if (board[i][j][k] == 1) {
					Q.push(tuple<int,int,int> (j, k, i)); 
					vis[i][j][k]=0;
				}
				else vis[i][j][k]=-1;
			}
		}
	}
	
	while(Q.size()){
		tuple<int,int,int> cur = Q.front(); Q.pop();
		for(int i=0; i<6; i++){
			int nx = dx[i] + X(cur);
			int ny = dy[i] + Y(cur);
			int nz = dz[i] + Z(cur);
			
			if (nx>=n || ny>=m || nz>=h || nx<0 || ny<0 || nz<0) continue;
			if (vis[nz][nx][ny]!=-1 || board[nz][nx][ny] == -1) continue;
			vis[nz][nx][ny] = vis[Z(cur)][X(cur)][Y(cur)] + 1;
			Q.push(tuple<int,int,int> (nx,ny,nz) );
			mx = max(mx, vis[nz][nx][ny]);
		}
	}

	for (int i=0; i<h; i++){
		for (int j=0; j<n; j++){
			for (int k=0; k<m; k++){
				if (board[i][j][k]==0 && vis[i][j][k]==-1) {
					cout << -1; 
					return 0;
				}
			}
		}
	}
	cout << mx;
}