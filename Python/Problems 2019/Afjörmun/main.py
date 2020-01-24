howManyLines = int(input())
stringList = []

for i in range(howManyLines):
    stringList.append(input().lower().capitalize())
    
for string in stringList:
    print(string)