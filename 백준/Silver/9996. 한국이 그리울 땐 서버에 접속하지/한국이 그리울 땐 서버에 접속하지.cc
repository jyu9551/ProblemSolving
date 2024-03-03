#include <bits/stdc++.h>
using namespace std;
string pattern, input;
int T, flag;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> T;
	cin >> pattern;
	for (int t=0; t<T; t++){
		cin >> input;
		if (input.size() < pattern.size()-1) { cout << "NE" << "\n"; continue; }
		
		for (int i=0; i<pattern.size(); i++) {
			if (pattern[i] == '*') break;
			if (input[i] != pattern[i]) flag++;
		}

		reverse(pattern.begin(), pattern.end());
		reverse(input.begin(), input.end());
		
		for (int i=0; i<pattern.size(); i++) {
			if (pattern[i] == '*') break;
			if (input[i] != pattern[i]) flag++;
		}
	
		if (flag == 0) cout << "DA" << '\n';
		else cout << "NE" << '\n';
		flag = 0;
		reverse(pattern.begin(), pattern.end());		
	}
}