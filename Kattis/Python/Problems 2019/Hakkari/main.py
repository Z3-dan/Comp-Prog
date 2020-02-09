def main():
    temp = input().split()
    temp = list(map(int, temp))
    linesX = temp[0]
    linesY = temp[1]
    currentX = 0
    currentY = 0
    playArea = []
    bombsLocation = []
    numberOfBombs = 0

    for i in range(linesX):
        playArea.append(input())

        for line in playArea:
            if(len(line) != linesY):
                return

    for line in playArea:
        currentY = 0
        currentX = currentX + 1
        for letter in line:
            bombs = []
            currentY = currentY + 1
            if letter == '*':
                bombs.append(currentX)
                bombs.append(currentY)
                bombsLocation.append(bombs)
                numberOfBombs = numberOfBombs + 1

    print(numberOfBombs)
    count = 0
    for eachBomb in bombsLocation:
        for bomb in eachBomb:
            print(bomb, end=' ')
        if count != len(bombsLocation):
            print('\n', end='')
            count = count + 1

main()


