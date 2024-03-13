#include <bits/stdc++.h>
using namespace std;
int N, cnt;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> N;
	while(N--){
		stack<char> stk;
		string tmp; cin >> tmp;
		for (int i=0; i<tmp.size(); i++){
			if (tmp[i] == 'A'){
				if (stk.size()>0 && stk.top() == 'A') stk.pop();
				else stk.push('A');			
			}
			else {
				if (stk.size()>0 && stk.top() == 'B') stk.pop();
				else stk.push('B');		
			}
		}
		if (stk.empty()) cnt++;	
	}
	cout << cnt;
}
