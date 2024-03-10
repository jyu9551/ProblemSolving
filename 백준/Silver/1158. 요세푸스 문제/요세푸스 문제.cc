#include <bits/stdc++.h>
using namespace std;
int N,K;
list <int> num;

int main(){
	cin >> N >> K;
	for (int i=1; i<=N; i++) num.push_back(i);
	auto cur = num.begin();

	cout << '<';
	while (num.size()-1){	
		
		for (int i=0; i<K-1; i++) {
			cur++;
			if (cur == num.end()) cur = num.begin();
		}
		
		cout << *cur << ", ";
		cur = num.erase(cur);
		if (cur == num.end()) cur = num.begin();
	}	
	cout << *cur << '>';
}