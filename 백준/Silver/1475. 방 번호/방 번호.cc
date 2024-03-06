#include <bits/stdc++.h>
using namespace std;
string number;
int cnt[10];

int main(){
	cin >> number;
	for (int i=0; i<number.size(); i++){
		cnt[int(number[i] - '0')]++;
	}
	if (cnt[6] != cnt[9]) {
		if (cnt[6] >= cnt[9]){
			while(1){
				if (cnt[6] <= cnt[9]) break;
				cnt[6]--; cnt[9]++;
			}
		}
		else {
			while(1){
				if (cnt[6] >= cnt[9]) break;
				cnt[6]++; cnt[9]--;
			}		
		}
	}	
	cout << *max_element(cnt, cnt+10);
}