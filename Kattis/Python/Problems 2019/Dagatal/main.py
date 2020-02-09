m = int(input())

def main():
    if m == 2:
        return 28
    elif m in [4,6,9,11]:
        return 30
    elif m in [1,3,5,7,8,10,12]:
        return 31

print(main())