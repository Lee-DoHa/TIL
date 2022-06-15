n, k = map(int, input().split())

count = 0

while(True):
    if(n == 1):
        break
    if((n < k)):
        n -= 1
        count += 1
        break
    n /= k
    count += 1

print(count)