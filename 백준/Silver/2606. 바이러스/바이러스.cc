#include <bits/stdc++.h>
using namespace std;
int n,m,cnt;
vector<int> adj[102];
int vis[102];

void dfs(int cur){
	vis[cur] = 1;
	for (int i:adj[cur]){
		if (vis[i]==1) continue;
		dfs(i);
		vis[i] = 1;
		cnt++;
	}
	return;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	while(m--){
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);	
		adj[v].push_back(u);
	}

	dfs(1);
	cout << cnt;
}	
