#include "bits/stdc++.h"
using namespace std;

queue <int> stk;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int N; cin >> N;
	while(N--){
		string in; cin >> in;
		if (in == "push"){
			int tmp; cin >> tmp;
			stk.push(tmp);
		}
		else if (in == "pop"){
			if (stk.empty()) cout << -1 << '\n';
			else {			
				int tmp = stk.front();
				cout << tmp << '\n';
				stk.pop();
			}
		}
		else if (in == "size"){
			cout << stk.size() << '\n';
		}
		else if (in == "empty"){
			cout << stk.empty() << '\n';
		}
		else if (in == "front"){
			if (stk.empty()) cout << -1 << '\n';
			else {			
				cout << stk.front() << '\n';
			}
		}	
		else if (in == "back"){
			if (stk.empty()) cout << -1 << '\n';
			else {			
				cout << stk.back() << '\n';
			}
		}	
	
	}
	


}