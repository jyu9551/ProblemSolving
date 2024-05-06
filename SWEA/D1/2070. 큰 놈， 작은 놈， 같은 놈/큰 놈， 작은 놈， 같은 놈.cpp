#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	for(int t=0; t<T; t++){		
		int tmp, tmp2; cin >> tmp >> tmp2;
		if (tmp > tmp2) cout << '#' << t+1 << " >\n"; 
		else if (tmp == tmp2) cout << '#' << t+1 << " =\n";
		else cout << '#' << t+1 << " <\n";
	}
	
}
