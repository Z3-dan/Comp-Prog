n = int(input())
x = []

for i in range(n):
    x.append(list(map(int, input().split())))

x.sort()

for house in x:
    counter = 0
    house = house[0]
    pollutionForEach = []
    for pollution in x:
        pollution = pollution[1]
        pollutionForEach.append(pollution * house + counter)
        counter = counter + x[house][house]
    print(pollutionForEach)
