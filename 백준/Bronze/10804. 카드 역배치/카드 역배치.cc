#include <bits/stdc++.h>
using namespace std;
string card;
int a,b;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	for (int i=1; i<=20; i++) card[i-1] = i;

	for (int i=0; i<10; i++) {
		cin >> a >> b;
		reverse(card.begin() + a-1, card.begin() + b);
	}

	for (int i=0; i<20; i++) cout << (int)card[i] << ' ';
}