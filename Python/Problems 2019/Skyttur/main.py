n = int(input())

a = input()
b = input()

output = ""

for i in range(n):
    if int(a[i]) == int(b[i]):
        output = output + "0"
    else:
        output = output + "1"

print(output)
