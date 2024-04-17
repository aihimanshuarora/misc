from array import array

arr = array("i", [1, 2, 3, 4])


def rev():
    m = 1
    i = m
    j = len(arr) - 1
    while i < j:
        temp = arr[i]
        arr[i] = arr[j]
        arr[j] = temp
        i = i + 1
        j = j - 1
    for i in range(0, len(arr)):
        print(arr[i])


rev()
