#include <bits/stdc++.h>
using namespace std;
stack <int> stk;
int N, sum;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> N;
	while(N--){
		int in;
		cin >> in;
		if (in == 0) stk.pop();
		else stk.push(in);
	}
	while(stk.size()){
		sum += stk.top();
		stk.pop();
	}
	cout << sum;
}
