#include <bits/stdc++.h>
using namespace std;
string input;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	getline(cin, input);
	
	for (int i=0; i<input.size(); i++) {
		if (input[i] >= 'a' && input[i] <= 'z')	cout << (char)((input[i]-'a'+13)%26 + 'a');
		else if (input[i] >= 'A' && input[i] <= 'Z') cout << (char)((input[i]-'A'+13)%26 + 'A');
		else cout << input[i];
	}
}