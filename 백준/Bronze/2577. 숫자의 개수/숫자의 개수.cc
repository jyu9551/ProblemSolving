#include <bits/stdc++.h>
using namespace std;
int counter[10];
int cnt;
int input[3];
int mul=1;

int main(){
	for (int i=0; i<3; i++){
		cin >> input[i];
		mul *= input[i];
	}
	while(1){
		if (mul == 0) break;
		
		counter[mul%10]++;
		cnt++;
		mul = mul / 10;
	}
	for (int i:counter) cout << i << '\n';		
}