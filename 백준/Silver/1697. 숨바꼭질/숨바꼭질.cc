#include "bits/stdc++.h"
using namespace std;

int table[1000002];
int   vis[1000002];
int N,K;
int dx[2] = {-1,1};

int main(){
	ios::sync_with_stdio(0);
    cin >> N >> K;
    queue<int> Q;
	Q.push(N);	
	vis[N] = 1;
		
	while(Q.size()){
		int cur = Q.front(); Q.pop();
		
        for (int i=0; i<2; i++){
    		int nx = cur + dx[i];		
    		if (nx<0 || nx>=1e6) continue;
    		if (vis[nx] != 0) continue;		
    		if (nx == K) {
    			cout << vis[cur];
    			return 0;
    		}
    		Q.push(nx); vis[nx] = vis[cur] + 1;
        }
        
		int nx = cur*2;		
		if (nx<0 || nx>=1e6) continue;
		if (vis[nx] != 0) continue;	
		if (nx == K) {
			cout << vis[cur];
			return 0;
		}
		Q.push(nx); vis[nx] = vis[cur] + 1;					
	}
	
	
	cout << 0;
}