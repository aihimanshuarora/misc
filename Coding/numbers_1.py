def a1():
    for i in range(0, 4):
        for j in range(0, 4):
            print("1", end="")
        print()


def a2():
    for i in range(0, 4):
        for j in range(0, 4):
            print(i, end="")
        print()


def a3():
    for i in range(0, 4):
        for j in range(0, 4):
            if i == 0 or i == 3:
                print("3", end="")
            elif j == 1:
                print(i, end="")
            else:
                print("3", end="")
        print()


def a4():
    num = 1
    for i in range(0, 10):
        for j in range(0, i):
            print(num, end="")
            num += 1
        print()


def a5():
    num = 55
    for i in range(0, 10):
        for j in range(0, 10 - i):
            print(num, end="")
            num = num - 1
        print()


def a6():
    for i in range(0, 4):
        for j in range(0, 4 - i):
            print(3 + 4 - i, end="")
        print()


def a7():
    for i in range(0, 4):
        for j in range(0, i):
            print(3 + i, end="")
        print()


def a8():
    num=3
    for i in range(0, 10):
        for j in range(0, i):
            print(num, end="")
            num += 1
        print()

