N = int(input())
A = list(map(int, input().split(' ')))
A.sort()
B = list(map(int, input().split(' ')))
B.sort()

result = 0
for i in range(N):
    result = result + A[i]*B[N-1-i]
print(result)