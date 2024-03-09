#if 0 // 1620
#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;
map<int, string> mp2;
int N,M;

int main(){
	ios::sync_with_stdio(0);	cin.tie(0);
	cin >> N >> M;
	
	for (int i=1; i<=N; i++){
		string tmp; cin >> tmp;
		mp[tmp] = i;
		mp2[i] = tmp;
	}
	
	for (int i=0; i<M;i++){
		string tmp;	cin >> tmp;
		if (atoi(tmp.c_str()))	cout << mp2[atoi(tmp.c_str())] << '\n';			
		else cout << mp[tmp] << '\n';
	}	
}
#endif

#if 1
#include <bits/stdc++.h>
using namespace std;
list <char> a;
string input;

int main(){
	cin >> input;
	for (int i=0; i<input.size(); i++){
		a.push_back(input[i]);
	}
	
	auto cur = a.end();
	int N;
	cin >> N;
	for (int i=0; i<N; i++){
		char tmp;
		cin >> tmp;
		switch (tmp) {
			case 'L': if (cur != a.begin()) cur--;
					  break;
			case 'D': if (cur != a.end()) cur++;
					  break;
			case 'B': if (cur != a.begin()) { 
						cur--;
					  	cur = a.erase(cur);
					  }
					  break;
			case 'P': char tmp2;
					  cin >> tmp2;
					  a.insert(cur, tmp2);
					  break;
			default : break;
		}
	}	
	for (auto i:a) cout << i;
}
#endif