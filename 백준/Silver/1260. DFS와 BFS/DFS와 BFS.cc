#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1002];
int vis1[1002];
int vis2[1002];
int N,M,V;

void dfs(int cur){
	vis1[cur] = 1;
	cout << cur << ' ';
	for(int i:adj[cur]){
		if (vis1[i] == 0) dfs(i);
	}
	return;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> N >> M >> V; 
	for(int i=0; i<M; i++) {
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for(int i=1; i<=N; i++) sort(adj[i].begin(), adj[i].end());
	
//	for(int i=1; i<=N; i++) {
//		cout << i << ": ";
//		for (int j=0;j<adj[i].size(); j++) cout << adj[i][j] << ' ';
//		cout << '\n';
//	}
		
	dfs(V);
	
	cout << '\n';

	queue<int> Q;
	Q.push(V); vis2[V] = 1;
	while(Q.size()){
		int cur = Q.front();
		cout << cur << ' '; Q.pop();
		for(int i:adj[cur]){
			if (vis2[i] == 0) {
				Q.push(i);
				vis2[i] = 1;
			}
		}
	}
}
