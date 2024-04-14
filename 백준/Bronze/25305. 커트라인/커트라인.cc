#include <bits/stdc++.h>
using namespace std;
vector<int> score;

bool cmp(int a, int b){
	return a > b;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int N, k; cin >> N >> k;
	while(N--){
		int tmp; cin >> tmp;
		score.push_back(tmp);
	}
	sort(score.begin(), score.end(), cmp);
	cout << score[k-1];

}