n = int(input())
x = []
polutionForEach = {}

for i in range(n):
    x.append(list(map(int, input().split())))

x.sort()

for houses in x:
    for numb in houses:
        print(numb)


print(polutionForEach)
