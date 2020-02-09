def main():
    posP = input().split(" ")
    posG = input().split(" ")

    if(len(posP) > 2 or len(posG) > 2):
        return

    if(posP[0] == posG[0] and posP[1] == posG[1]):
        return

    if(posP[0] == posG[0] or posP[1] == posG[1]):
        return print(1)
    else:
        return print(2)

main()

