for i in range(int(input("Enter Test Case"))):
    N = int(input())

    list1 = list(map(int, input().split()))
    array = []
    for i in range(N):
        array.append(list1[i] % 3)
    x = array.count(0)
    y = array.count(1)
    z = array.count(2)
    if x == 0 and y != 0 and z != 0:
        print("NO")
    elif x == 0 and y == 0 and z != 0:
        print("YES")

    elif x == 0 and y != 0 and z == 0:
        print("YES")
    elif x <= (z+y):
        print("YES")
    else:
        print("No")
