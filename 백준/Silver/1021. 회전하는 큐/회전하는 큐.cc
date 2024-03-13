#include <bits/stdc++.h>
using namespace std;
int N, M, cnt;
deque <int> a;
vector <int> num;

int main(){
	cin >> N >> M;
	for(int i=1; i<=N; i++) a.push_back(i);	
	for(int i=0; i<M; i++) {
		int tmp; cin >> tmp;
		num.push_back(tmp);
	}
		
	int k=0;
	while(k != M){
			
//		for (int i=0; i<a.size(); i++) cout << a[i] << ' ';
//		cout << endl;
//		cout <<  "num[k]= " << num[k] << " cnt= " << cnt << endl;
		
		int idx;
		for(int i=0;i<a.size();i++) if(num[k] == a[i]) idx = i;
//		cout << "idx=" << idx << endl;
		if (a.front() == num[k]) {
			a.pop_front();
			k++;
		}
		else if (a.size()/2 < idx){
			a.push_front(a.back());
			a.pop_back();
			cnt++;
		}
		else if (a.size()/2 >= idx){
			a.push_back(a.front());
			a.pop_front();
			cnt++;
		}
		//cout << endl;
	}
	cout << cnt;
}
