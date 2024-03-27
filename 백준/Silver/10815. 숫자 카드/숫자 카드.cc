#include <bits/stdc++.h>
using namespace std;
int cnt1[10000002];
int cnt2[10000002];

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int N; cin >> N;
    while(N--){
        long long in; cin >> in;
        if (in >= 0) cnt1[in]++;
        else cnt2[-in]++;
    }
    cin >> N;
    while(N--){
		long long in; cin >> in;
		if (in >= 0) {
			if(cnt1[in]) cout << 1 << ' ';
			else cout << 0 << ' ';
		}
		else {
			if(cnt2[-in]) cout << 1 << ' ';
			else cout << 0 << ' ';		
		}
	}
}
