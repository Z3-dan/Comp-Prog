l,r,k = map(int, input().split())

n = input().split()

output = 0

while l <= r:
    for x in n:
        if l % int(x) == 0:
            output = output + 1
    l = l + 1

print(output)
