N = int(input("Enter a N: "))

num = 1

for i in range(1, N + 1):
    for j in range(i):
        print(num, end='')
        num += 1
    print()  