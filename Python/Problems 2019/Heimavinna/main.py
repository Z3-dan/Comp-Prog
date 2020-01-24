def count(a, b):
    output = []
    while a <= b:
        output.append(a)
        a = a + 1
    return len(output)

temp = input().split(";")
output = 0
for integer in temp:
    if '-' in integer:
        integer = integer.split('-')
        integer = [int(i) for i in integer]
        output += count(integer[0], integer[-1])
    else:
        output += 1

print(output)