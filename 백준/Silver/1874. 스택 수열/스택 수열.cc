#include <bits/stdc++.h>
using namespace std;
stack <int> stk;
int N;
vector <int> in;
vector <char> result;
int main(){ 
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> N;
	for (int i=0; i<N; i++) {
		int tmp;
		cin >> tmp;	
		in.push_back(tmp);
	}

	int k=0;
	for (int i=1; i<=N; i++){
		if (stk.size() == 0 || i <= in[k]){
			stk.push(i);
			result.push_back('+');
//			cout << "+ ";
		}
		else {
			if (in[k] == stk.top()){
				stk.pop();
				k++;
				result.push_back('-');
//				cout << "- ";
				i--;
			}
			else {
				cout << "NO";
				exit(0);
			}
		}
	}
	while(stk.size()){
		if (in[k] == stk.top()) {
			result.push_back('-');
//			cout << "- ";
			stk.pop(); k++;	
		}
		else {
			cout << "NO";
			exit(0);
		}
	}
	for (char i:result) cout << i << '\n';
}
