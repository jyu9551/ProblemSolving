#include <bits/stdc++.h>
using namespace std;
int main(){
	int A,k=1,sum=0;
	string B;
	cin >> A >> B;
	for(int i=B.size()-1; i>=0; i--){
		int tmp = A*(B[i]-'0');
		sum += tmp*k;
		k*=10;
		cout << tmp << '\n';
	}
	cout << sum;
}