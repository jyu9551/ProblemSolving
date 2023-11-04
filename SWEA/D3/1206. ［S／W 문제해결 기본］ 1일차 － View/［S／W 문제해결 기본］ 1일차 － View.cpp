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

#if 0
#include <stdio.h>
#include <math.h>

void printfloat(int a, int b) {
	printf("%d.", a / b);

	for (int i = 0; i < 20; i++) {
		a = 10 * (a - (a / b * b));
		printf("%d", a / b);
		if (a % b == 0) break;
	}

}

int main() {

	//freopen("sample_input.txt", "r", stdin);
	/* 아래 코드를 수행하지 않으면 여러분의 프로그램이 제한 시간 초과로 강제 종료 되었을 때,
	출력한 내용이 실제 표준 출력에 기록되지 않을 수 있습니다.
	따라서 안전을 위해 반드시 setbuf(stdout, NULL); 을 수행하시기 바랍니다.
	*/
	//setbuf(stdout, NULL);

	int T;
	scanf("%d", &T);

	for (int t = 0; t < T; t++) {
		int sum = 0;
		int a;

		int num;
		scanf("%d", &num);

		for (int i = 0; i < num; i++) {
			scanf("%d", &a);
			sum += a;
		}
		
		if (sum % num == 0)	printf("#%d %d\n", t + 1, sum/num);
		else {
			printf("#%d ", t+1);
			printfloat(sum, num);
			printf("\n");
		}
	}

}
#endif

#if 1
#include <stdio.h>
#include <math.h>

int max3(int a, int b, int c) {
	if (a > b && a > c)	return a;
	else if (b > a && b > c) return b;
	else return c;
}
int max4(int a, int b, int c, int d) {
	//printf(" max(%d %d %d %d) ", a, b, c, d);
	if (a >= b && a >= c && a >= d)	return a;
	else if (b >= a && b >= c && b >= d) return b;
	else if (c >= a && c >= b && c >= d) return c;
	else return d;
}




int res = 0;

int main(){

	for (int t = 0; t < 10; t++) {
		
		int b[1000] = { 0, };

		int N;
		scanf("%d", &N);

		for (int i = 0; i < N; i++) {
			scanf("%d", &b[i]);
		}


		// first
		if (b[0] > b[1] && b[0] > b[2])
		{
			if (b[1] < b[2])	res += b[0] - b[2];
			else				res += b[0] - b[1];
		}
		// second
		if (b[1] > b[0] && b[1] > b[2] && b[1] > b[3])
		{
			res += b[1] - max3(b[0], b[2], b[3]);
		}
		// last
		if (b[N - 1] > b[N - 2] && b[N - 1] > b[N - 3])
		{
			if (b[N - 2] < b[N - 3])	res += b[N - 1] - b[N - 3];
			else				res += b[N - 1] - b[N - 2];
		}
		// before last
		if (b[N - 2] > b[N - 1] && b[N - 2] > b[N - 3] && b[N - 2] > b[N - 4])
		{
			res += b[N - 2] - max3(b[N - 1], b[N - 3], b[N - 4]);
		}


		for (int i = 2; i < N - 2; i++) {

			if (b[i] > b[i - 2] && b[i] > b[i - 1] && b[i] > b[i + 1] && b[i] > b[i + 2]) {
				res += b[i] - max4(b[i - 2], b[i - 1], b[i + 1], b[i + 2]);
				//printf("%d %d\n", b[i], max4(b[i - 2], b[i - 1], b[i + 1], b[i + 2]) );
			}
		}

		printf("#%d %d\n", t+1, res);
		res = 0;
	}
}
#endif