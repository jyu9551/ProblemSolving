#include <bits/stdc++.h>
using namespace std;
string str1, str2;
int cnt[26];
int N;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);

	cin >> N;
	for (int i=0; i<N; i++){
		cin >> str1 >> str2;
		
		int flag = 0;
		fill(cnt, cnt+26, 0);
		
		for (int i=0; i<str2.size(); i++) {
			cnt[str2[i] - 'a']++;
		}
		for (int i=0; i<str1.size(); i++) {
			cnt[str1[i] - 'a']--;
		}
		for (int i=0; i<26; i++) {
			if (cnt[i]) flag++;
		}
		if (flag) cout << "Impossible" << '\n';
		else cout << "Possible" << '\n';
	}

}