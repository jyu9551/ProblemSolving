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