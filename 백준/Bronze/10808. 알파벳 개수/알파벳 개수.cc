#include <bits/stdc++.h>
using namespace std;

int alphabet[26];

int main(){
	string input;
	cin >> input;
	
	for(int i=0; i<input.size(); i++) alphabet[input[i] - 'a']++;
	for(int i=0; i<26; i++) cout << alphabet[i] << ' ';
}