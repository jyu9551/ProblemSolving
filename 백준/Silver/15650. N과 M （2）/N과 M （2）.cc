#include <bits/stdc++.h>
using namespace std;
int a[10];
int n, r;
bool used[10];
void per(int depth){
	if (depth == r){
		for(int i=0; i<r; i++) cout << a[i] << ' ';
		cout << '\n';
	}
	for(int i=1; i<=n; i++){
		if (!used[i] && a[depth-1]<i){
			a[depth] = i;
			used[i] = 1;
			per(depth+1);
			used[i] = 0;
		}
	}
	return;
}

int main(){
	cin >> n >> r;
	per(0);
	return 0;
}
