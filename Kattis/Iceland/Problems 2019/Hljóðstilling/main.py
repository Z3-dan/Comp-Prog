l,r,k = map(int, input().split())

n = input().split()
n = [int(i) for i in n]

output = []

while l <= r:
    for x in n:
        if l % x == 0 and l % 1 == 0:
            output.append(l)
    l = l + 1

output = list(set(output))

print(len(output))
