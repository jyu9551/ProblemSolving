#include <bits/stdc++.h>
using namespace std;
int main(){
	string in; cin >> in;
	for(int i=0; i<in.size(); i++) cout << (int)(in[i]-'A' + 1) << ' ';
}
