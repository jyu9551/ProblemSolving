#include <bits/stdc++.h>
using namespace std;
int N;
queue <int> a;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> N;
	for(int i=1; i<=N; i++) a.push(i);
	
	while (a.size() > 1){
		
		a.pop();
		
		int tmp = a.front();
		a.pop();
		a.push(tmp);
	}
	cout << a.front();
}
