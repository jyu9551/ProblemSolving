#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin >> n;
	for(int i=1; i<=n; i++){
		string str = to_string(i);
		int cnt = 0;
		for (int j=0; j<str.size(); j++){
			if (str[j]=='3' || str[j]=='6' || str[j]=='9') cnt++;
		}
		if (cnt) {
			for(int j=0; j<cnt; j++) cout << '-';
		}
		else cout << i;
		
		cout << ' ';
	}
}
