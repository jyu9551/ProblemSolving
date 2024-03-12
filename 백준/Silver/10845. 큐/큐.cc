#include <bits/stdc++.h>
using namespace std;
int N;
queue <int> a;

int main(){
	cin >> N;
	while(N--){
		string op;
		cin >> op;
	
		if (op == "push"){
			int tmp; cin >> tmp;
			a.push(tmp); 
		}
		else if (op == "pop"){
			if (a.size() == 0) cout << -1 << '\n';
			else {
				cout << a.front() << '\n';
				a.pop();
			}
		}
		else if (op == "size") cout << a.size() << '\n';
		else if (op == "empty") cout << a.empty() << '\n';
		else if (op == "front") {
			if (a.size() == 0) cout << -1 << '\n';
			else cout << a.front() << '\n';
		}
		else {
			if (a.size() == 0) cout << -1 << '\n';
			else cout << a.back() << '\n';
		}
	
	}
}
