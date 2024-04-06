#include <bits/stdc++.h>
using namespace std;

int main(){
	int h,m,time; cin >> h >> m >> time;
	
	if (m+time < 60) cout << h << ' ' << m+time;
	else {
		int time_h = (m+time)/60;
		int time_m = (m+time)%60;
		if (time_h+h >= 24) cout << (time_h+h)%24 << ' ' << time_m;	
		else cout << (time_h+h) << ' ' << time_m;
	}

}