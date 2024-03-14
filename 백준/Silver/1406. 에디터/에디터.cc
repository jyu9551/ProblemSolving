#include <bits/stdc++.h>
using namespace std;
list <char> a;
string input;
int M;
int main(){
	cin >> input;
	for (int i=0; i<input.size(); i++) a.push_back(input[i]);
	cin >> M;
	auto it = a.end();
	while(M--){
		char tmp; cin >> tmp;
		if (tmp == 'L'){
			if (it != a.begin()) it--; 
		}
		else if (tmp == 'D') {
			if (it != a.end()) it++; 		
		}
		else if (tmp == 'B') {
			if (it != a.begin()) {it--; it = a.erase(it);} 			
		}
		else {
			char tmp; cin >> tmp;
			a.insert(it, tmp); 					
		}
	}
	for (auto i:a) cout << i;
}
