#include <bits/stdc++.h>
using namespace std;
string in;
stack <pair<int, char>> stk;
vector<int> rasor;
int cnt;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> in;
	
	stack <pair<int, char>> stk;
	for (int i=0; i<in.size(); i++) {
		if (in[i] == '(') stk.push({i, in[i]});
		else if (stk.top().second =='(' && stk.top().first+1==i ) { rasor.push_back(i-1); stk.pop(); }
		else {
			if (stk.top().second =='(' && stk.top().first+1!=i ) {
				for (int k:rasor) {
					if (k>=stk.top().first && k<=i) cnt++;
				}
				cnt++;
//				cout << cnt << endl;
				stk.pop();
			}
			else stk.pop();
		}
	}
	cout << cnt;
}
