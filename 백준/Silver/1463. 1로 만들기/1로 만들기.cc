#include "bits/stdc++.h"
using namespace std;

int d[1000001];

int main(){
	int input; cin >> input;
	
	for (int i=2; i<=input; i++){
		vector<int> tmp;
		if (i%3==0) tmp.push_back(d[i/3] + 1);
		if (i%2==0) tmp.push_back(d[i/2] + 1);
		tmp.push_back(d[i-1] + 1);
		
		d[i] = *min_element(tmp.begin(), tmp.end());
	}
	cout << d[input];
}