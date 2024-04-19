#if 0
// 1859
#include <stdio.h>
#include <stdlib.h>

int price[1000000];

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int T;
	scanf("%d", &T);

	int N;
	//	unsigned int price[100];

	for (int i = 0; i < T; i++) {
		long int profit = 0;

		scanf("%d", &N);
		for (long int j = 0; j < N; j++) {
			scanf("%d", &price[j]);
		}

		// 받아온 N, price 존재
		for (int k = 0; k < N; k++) {
			int max = 0;
			for (long int l = k; l < N; l++) {	// 자신 제외 max값 찾기
				if (price[l] > max)	max = price[l];
			}

			if (price[k] < max) {
				profit += max - price[k];
			}

		}

		printf("#%d %ld\n", i + 1, profit);
	}



}
#endif

#if 0
// 1859
#include <stdio.h>
#include <stdlib.h>

int arr[1000000];

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int T, tc;
	scanf("%d", &T);

	int N, i;
	//	unsigned int price[100];

	for (tc = 1; tc <= T; ++tc) {

		scanf("%d", &N);
		for (i = 0; i < N; i++) {
			scanf("%d", &arr[i]);
		}

		int max = 0;
		long long int profit = 0;

		for (int i = N - 1; i >= 0; i--) {
			if (arr[i] > max)	max = arr[i];
			else
				profit += max - arr[i];

		}

		printf("#%d %lld\n", tc, profit);
	}


	return 0;
}
#endif

#if 0
#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);

	for (int k = 0; k < T; k++) {
		int N;
		scanf("%d", &N);

		for (int x = 2; x < 1000000000; x++) {
			int cnt = 0;
			for (int i = 2; i <= x; i++) {
				if (x % i == 0) cnt++;
				if (cnt == 2)	break;
			}

			if (cnt == 2) {
				int cnt2 = 0;
				for (int i = 2; i <= x + N; i++) {
					if ((x + N) % i == 0) cnt2++;
					if (cnt2 == 2) {
						printf("#%d %d %d\n", k + 1, x + N, x);
						break;
					}
				}
				if (cnt2 == 2)	break;
			}
		}


	}




}

#endif

#if 1
#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int T; cin >> T;
	for(int t=0; t<T; t++){		
		int sum = 0;
		for (int i=0; i<10; i++) {
			int tmp; cin >> tmp;
			if (tmp % 2 == 1) sum += tmp;
		}	
		cout << '#' << t+1 << ' ' << sum << '\n'; 
	}
	
}
#endif