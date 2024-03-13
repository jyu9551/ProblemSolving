#include <bits/stdc++.h>
using namespace std;
int T, N, flag;
string op;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> T;
	while(T--) {
		cin >> op;
//		cout << T;
		flag = 1;
		deque<int> a;
				
		cin >> N;
		char c; cin >> c;
		if (N > 0){
			for (int i=0; i<N; i++){
				int tmp;
				cin >> tmp >> c;
				a.push_back(tmp);
			}
		}
		else cin >> c;
		
		for (int i=0; i<op.size(); i++){
		//	cout << flag << ' ' << a.size() << endl;
			if (op[i] == 'R') {
				if (flag) flag = 0;
				else flag = 1;
			}
			else {
				if (a.size()==0) {flag=2; break;}
				else if (flag==1) a.pop_front();  
				else a.pop_back();
			}
		}	
		
		
		if (flag==2) cout << "error" << '\n';
		else if (a.size() == 0) cout << "[]\n";
		else if (flag) {
			cout << '[';
			for (int i=0; i<a.size()-1; i++) cout << a[i] << ',';
			cout << a[a.size()-1] << "]\n";
		}
		else {
			cout << '[';
			for (int i=a.size()-1; i>0; i--) cout << a[i] << ',';
			cout << a[0] << "]\n";
		}	
	}
}

