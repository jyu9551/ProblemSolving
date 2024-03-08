#include <bits/stdc++.h>
using namespace std;
string str1, str2;
int cnt1[26], cnt2[26];
int cnt;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> str1 >> str2;
	
	for (int i=0; i<str1.size(); i++) cnt1[str1[i] - 'a']++;
	for (int i=0; i<str2.size(); i++) cnt2[str2[i] - 'a']++;
	
	for (int i=0; i<26; i++) cnt += abs(cnt1[i] - cnt2[i]);
	
	cout << cnt;

}