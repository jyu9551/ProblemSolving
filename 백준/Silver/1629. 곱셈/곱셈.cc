#include <bits/stdc++.h>
using namespace std;

long long go(long long a, long long b, long long c){
	if (b == 0) return 1;
	if (b == 1) return a%c;
	if (b%2==0) return go(a, b/2, c)%c * go(a, b/2, c)%c;	
	else return go(a,b/2, c)%c * go(a,b/2+1,c)%c;
}

int main(){
	long long A,B,C;
	cin >> A >> B >> C;
	cout << go(A,B,C);
}
