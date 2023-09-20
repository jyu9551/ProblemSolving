num = int(input())          # 3 / 2
min = 99999
rope = []

# rope weight 입력
for i in range(num):
    tmp = int(input())      # 10 30 50 / 10 15
    rope.append(tmp)

# rope weight 정렬
rope = sorted(rope, reverse=True)   # 50 30 10 / rope = 15 10

# 만들 수 있는 무게를 answer에 저장
answer = []

for i in range(num):   # i = 0 1 2, num = 3
    answer.append(rope[i]*(i+1))

print(max(answer))