#include <bits/stdc++.h>
using namespace std;
string input;

int main(){
	int N;
	cin >> N;
	while (N--){
		string input;
		cin >> input;
	
		list <char> a;
		auto cur = a.end();
		for (int i=0; i<input.size(); i++) {
			switch (input[i]) {
				case '<': if (cur != a.begin()) cur--;
						  break;
				case '>': if (cur != a.end()) cur++;
						  break;
				case '-': if (cur != a.begin()) { 
							cur--;
						  	cur = a.erase(cur);
						  }
						  break;
				default : a.insert(cur, input[i]);
						  break;
			}
		}
		for (auto i:a) cout << i;
		cout << '\n';
	}	
}