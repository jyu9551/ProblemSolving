#include <bits/stdc++.h>
using namespace std;
int N, cnt;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> N;
	while(N--){
		stack<char> stk;
		bool result = true;

		string tmp; cin >> tmp;
		for (int i=0; i<tmp.size(); i++){
			if (tmp[i] == '(') stk.push('(');
			else {
				if (stk.size()>0 && stk.top() == '(') stk.pop();
				else {result=false; break;}
			}
		}
		if (stk.empty() && result) cout << "YES\n";
		else cout << "NO\n";
	}
}
