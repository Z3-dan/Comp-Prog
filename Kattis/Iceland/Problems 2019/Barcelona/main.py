n,k = map(int, input().split())
a = list(map(int, input().split()))

counter = 1

for case in a:
    if k == a[0]:
        print("fyrst")
        break
    elif k == a[1]:
        print("naestfyrst")
        break
    elif k == case:
        print(counter, "fyrst")
        break
    else:
        counter = counter + 1