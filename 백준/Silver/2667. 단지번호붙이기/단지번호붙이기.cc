#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
int board[30][30];
int vis[30][30];
int n,m;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
vector<int> num;
int cnt, tmp;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n; m = n;
	for (int i=0; i<n; i++){
		string tmp; cin >> tmp;
		for (int j=0; j<m; j++){
			board[i][j] = tmp[j] - '0';
			vis[i][j] = -1;
		}
	}
	
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			if (board[i][j] == 0 || vis[i][j]!=-1) continue;
			queue<pair<int, int>> Q;
			Q.push({i,j});
			vis[i][j] = 0;

			while(Q.size()){
				pair<int,int> cur = Q.front(); Q.pop();
				for(int d=0; d<4; d++){
					int nx = dx[d] + cur.X;
					int ny = dy[d] + cur.Y;
					if (nx>=n || ny>=m || nx<0 || ny<0) continue;
					if (vis[nx][ny]!=-1 || board[nx][ny]==0) continue;
					
					vis[nx][ny] = vis[cur.X][cur.Y] + 1;
					tmp++;
					Q.push({nx,ny});
				}
			}
			num.push_back(tmp+1);
			tmp = 0;
			cnt++;
		}
	}
	
//	for (int i=0; i<n; i++){
//		for (int j=0; j<m; j++){
//			cout << vis[i][j] << ' '; 
//		}
//		cout << '\n';
//	}
	
	
	sort(num.begin(), num.end());
	cout << cnt << '\n';
	for (int i:num) cout << i << '\n';
}
