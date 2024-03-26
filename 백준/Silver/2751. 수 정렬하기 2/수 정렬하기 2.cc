#include<bits/stdc++.h>
using namespace std;
int T,q;
vector<long long>A;
int main(int argc, char** argv)
{
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> T;
    for(int i=0; i<T; i++) {
        long long tmp; cin >> tmp;
        A.push_back(tmp);
    }
    sort(A.begin(), A.end());
	for(auto i:A) cout << i << '\n';
}