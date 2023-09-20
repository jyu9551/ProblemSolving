N = int(input())    # 회의의 수

# 회의 시간 입력
time = []
for i in range(N):
    s,e = input().split(' ')
    time.append([int(s),int(e)])

# 종료 시간 기준으로, 내림차순 정렬
time = sorted(time, reverse = False, key=lambda x : x[0])
time = sorted(time, reverse = False, key=lambda x : x[1])

cnt = 1
end = time[0][1]
for i in range(1,N):
    if time[i][0] >= end:
        cnt+=1
        end = time[i][1]

print(cnt)