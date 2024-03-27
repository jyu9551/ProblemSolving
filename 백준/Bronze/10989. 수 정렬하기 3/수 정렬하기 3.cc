#include <bits/stdc++.h>
using namespace std;
int cnt[10002];

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    long long N; cin >> N;
    while(N--){
        int in; cin >> in;
        cnt[in]++;
    }
    for (auto i=0; i<10002; i++){
		if (cnt[i]) {
			for (int j=0; j<cnt[i]; j++) cout << i << '\n';
		}
	}
}
