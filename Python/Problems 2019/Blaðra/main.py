k,q = map(int, input().split(" "))
output = [0]*k

for i in range(q):
    a,b = map(int, input().split(" "))
    output[b -1] += 1

print(min(output))