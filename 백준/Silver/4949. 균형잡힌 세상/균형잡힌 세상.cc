#include <bits/stdc++.h>
using namespace std;

int main(){
	int cnt=0;
	ios::sync_with_stdio(0); cin.tie(0);
	while(1){	
		string b; getline(cin, b);
		if (b.size() == 1 && b[0] == '.') break;

		stack <char> stk;
		bool result = true;
		
		for (int i=0; i<b.size(); i++){
			if (b[i] == '(' || b[i] == '{' || b[i] == '[' || b[i] == ')' || b[i] == '}' || b[i] == ']') {
		
				if (b[i] == '(' || b[i] == '{' || b[i] == '[') stk.push(b[i]);
				else if (b[i] == ')') {
					if (stk.size()!=0 && stk.top()=='(') stk.pop();
					else result = false;
				}
				else if (b[i] == '}') {
					if (stk.size()!=0 && stk.top() == '{') stk.pop();
					else result = false;
				}
				else if (b[i] == ']') {
					if (stk.size()!=0 && stk.top() == '[') stk.pop();
					else result = false;
				}
		
			}
		}
		
		if (result && stk.size()==0) cout << "yes" << '\n';
		else cout << "no" << '\n';	
	}
}
