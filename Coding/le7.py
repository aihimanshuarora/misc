from array import array


def b2d(n):
    arr = array(
        "i",
        [
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
        ],
    )
    i = 0
    while n > 0:
        arr[i] = n % 2
        n = int(n / 2)
        i = i + 1
    t = 0
    for i in range(0, 32):
        t = t + pow(2, i) * arr[i]
    print(t)


b2d(10)
