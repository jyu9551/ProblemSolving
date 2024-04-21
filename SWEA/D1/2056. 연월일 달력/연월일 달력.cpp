#include <bits/stdc++.h>
using namespace std;
int main(){
	int T; cin >> T;
	for(int t=0; t<T; t++){
		cout << '#' << t+1 << ' ';
		int y, m, d;
		scanf("%04d%02d%02d", &y, &m, &d);
		if (m < 1 || m > 12) {
			cout << -1 << '\n';
		}
		else {
			if (m % 2 == 1){ // 1 3 5 7 9 11 
				if (d < 1 || d > 31) cout << -1 << '\n'; 
				else {
						printf("%04d/%02d/%02d\n", y,m,d);
				}
			}
			else {	// 2 4 6 8 10 12
				if(m==2) {
					if (d < 1 || d > 28) cout << -1 << '\n';
					else {
						printf("%04d/%02d/%02d\n", y,m,d);
					}
				}
				else {
					if (d < 1 || d > 30) cout << -1 << '\n';
					else {
						printf("%04d/%02d/%02d\n", y,m,d);						
					}

				}
				
			}
		}
	}
}
