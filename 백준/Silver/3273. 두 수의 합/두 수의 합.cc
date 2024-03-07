#include <bits/stdc++.h>
using namespace std;
int in[100004];
int cnt[2000004];

int n,x,result=0;
	
int main(){
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> in[i];
		cnt[in[i]] = 1;
	}
	cin >> x;
	
	for (int i=0; i<n; i++){
		if (x-in[i] <= 0) ;
		else {
			if (cnt[x-in[i]])	result++;
		}
	}	
	cout << result/2;	
}