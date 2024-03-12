#include <bits/stdc++.h>
using namespace std;
stack <pair<int, int>> height;
int N;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	height.push({0, 1e9+1});
	cin >> N;
	for (int i=1; i<=N; i++) {
		int tmp;
		cin >> tmp;
		while(1){
			if (height.top().second >= tmp){
				cout << height.top().first << ' ';
				break;
			}
			height.pop();
		}
		height.push({i, tmp});
	}	
}
