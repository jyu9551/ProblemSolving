#include <bits/stdc++.h>
using namespace std;
int main(){
	int T; cin >> T;
	for(int t=0; t<T; t++){		
		int sum = 0;
		for (int i=0; i<10; i++) {
			int tmp; cin >> tmp;
			sum += tmp;
		}	
		printf("#%d %.0f\n", t+1, (float)sum/10); 
	}
	
}
