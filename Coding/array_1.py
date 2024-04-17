# from array import array

# arr = array("i", [1, 2, 3, 4])
# i = 0
# j = 3
# while i < j:
#     t = arr[i]
#     arr[i] = arr[j]
#     arr[j] = t
#     i = i + 1
#     j = j - 1

# for i in range(0, len(arr)):
#     print(arr[i])
# # # def ma(arr):
# # #     nax=0;
# # #     for i in range(0,len(arr)):
# # #         if arr[i]>nax:
# # #             nax=arr[i]
# # #     print(nax)
# # # ma(a)
# # num=123
# # swap=0
# # while num>0:
# #     swap=swap*10+num%10
# #     num=int(num/10)
# #     # print(num)
# # print(swap)
# # a = 3
# # b = 4
# # temp = a
# # a = b
# # b = temp
# # print(a, b)

from array import array
arr=array("i")
i=int(input())
for j in range(0,i):
    if j%2==0:
        arr.append(j)