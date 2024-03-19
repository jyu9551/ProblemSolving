#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
int n,m;
char board[102][102];
char board2[102][102];
int vis1[102][102];
int vis2[102][102];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n; m = n;
	
	for(int i=0; i<n; i++){
		string tmp; cin >> tmp;
		for (int j=0; j<m; j++){
			board[i][j] = tmp[j];
			if (tmp[j]=='G') tmp[j]='R';
			board2[i][j] = tmp[j];
		}	
	}	
	
	int cnt=0;
	for(int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			if (vis1[i][j] == 1) continue;
			cnt++;
			queue<pair<int, int>> Q;
			Q.push({i,j}); vis1[i][j]=1;
			while(Q.size()){
				pair<int,int> cur = Q.front(); Q.pop();
				for (int d=0; d<4; d++){
					int nx = cur.X + dx[d];
					int ny = cur.Y + dy[d];
					if (nx>=n || ny>=m || nx<0 || ny<0) continue;
					if (vis1[nx][ny]==1 || board[cur.X][cur.Y]!=board[nx][ny]) continue;
					Q.push({nx,ny}); vis1[nx][ny]=1;
				}
			}
		}	
	}	
	cout << cnt << ' ';
	
	cnt=0;
	for(int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			if (vis2[i][j] == 1) continue;
			cnt++;
			queue<pair<int, int>> Q;
			Q.push({i,j}); vis2[i][j]=1;
			while(Q.size()){
				pair<int,int> cur = Q.front(); Q.pop();
				for (int d=0; d<4; d++){
					int nx = cur.X + dx[d];
					int ny = cur.Y + dy[d];
					if (nx>=n || ny>=m || nx<0 || ny<0) continue;
					if (vis2[nx][ny]==1 || board2[cur.X][cur.Y]!=board2[nx][ny]) continue;
					Q.push({nx,ny}); vis2[nx][ny]=1;
				}
			}
		}	
	}	
	cout << cnt;
	
}	
