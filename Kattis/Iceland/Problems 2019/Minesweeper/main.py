n,m,k = map(int, input().split())

area = []

for i in range(n):
    line = []
    for j in range(m):
        line.append('.')
    area.append(line)

for i in range(k):
    y,x = map(int, input().split())
    area[y-1][x-1] = '*'

for i in range(n):
    print(''.join(area[i]))
