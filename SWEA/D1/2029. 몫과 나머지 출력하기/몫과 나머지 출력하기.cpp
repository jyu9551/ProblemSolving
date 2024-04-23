#include <bits/stdc++.h>
using namespace std;
int main(){
	int T; cin >> T;
	for(int i=1; i<=T; i++){
		int a,b; cin >> a >> b;
		cout << '#' << i << ' ' << a/b << ' ' << a%b << '\n';
	}
}
