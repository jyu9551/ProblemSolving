string = input().split('-')
result = sum(map(int, string[0].split('+')))

if len(string) > 1:
    for i in range(1,len(string)):
        result = int(result) - sum(map(int, string[i].split('+')))
print(result)

