def main():
    days = input().split(" ")
    if(len(days) > 1):
        return 0

    degrees = input().split()
    degrees = [int(degree) for degree in degrees]
    if(len(degrees) < int(days[0])):
        return 0

    return print(max(degrees), min(degrees))


main()
