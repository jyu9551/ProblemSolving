#include <bits/stdc++.h>
using namespace std;
stack <int> stk;
int N;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> N;
	while(N--){
		string in;
		cin >> in;
		if (in == "push") {
			int num;
			cin >> num;
		    stk.push(num);
		}
		else if (in == "pop") {
			if (stk.size() == 0) cout << -1 << '\n';
			else { cout << stk.top() << '\n'; stk.pop(); }		
		}
		else if (in == "size") {  
			cout << stk.size() << '\n';
		}
		else if (in == "empty") {
			if (stk.size() == 0) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else {
			if (stk.empty()) cout << -1 << '\n';
			else cout << stk.top() << '\n';
		}
	}
}