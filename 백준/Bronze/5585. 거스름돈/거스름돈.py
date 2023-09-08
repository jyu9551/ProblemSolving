price = int(input())
cnt = 0
ret = 1000-price    # ret=620

if ret==0:
    print(cnt)
    exit()
    
cnt = cnt + ret//500
ret = ret%500
if ret==0:
    print(cnt)
    exit()

cnt = cnt + ret//100
ret = ret%100
if ret==0:
    print(cnt)
    exit()
    
cnt = cnt + ret//50
ret = ret%50
if ret==0:
    print(cnt)
    exit()

cnt = cnt + ret//10
ret = ret%10
if ret==0:
    print(cnt)
    exit()

cnt = cnt + ret//5
ret = ret%5
if ret==0:
    print(cnt)
    exit()

cnt = cnt + ret//1
ret = ret%1
if ret==0:
    print(cnt)
    exit()

