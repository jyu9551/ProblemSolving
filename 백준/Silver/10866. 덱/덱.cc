#include <bits/stdc++.h>
using namespace std;
int N;
deque <int> a;

int main(){
	cin >> N;
	while(N--){
		string op;
		cin >> op;
	
		if (op == "push_front"){
			int tmp; cin >> tmp;
			a.push_front(tmp); 
		}
		else if (op == "push_back"){
			int tmp; cin >> tmp;
			a.push_back(tmp); 
		}
		else if (op == "pop_front"){
			if (a.size() == 0) cout << -1 << '\n';
			else {
				cout << a.front() << '\n';
				a.pop_front();
			}
		}
		else if (op == "pop_back"){
			if (a.size() == 0) cout << -1 << '\n';
			else {
				cout << a.back() << '\n';
				a.pop_back();
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

