def Calculate(m, n):
    total = 0
    for i in range(m, n + 1):
        if i % 3 == 0 and i % 5 == 0:
            total += i
    return total


m = int(input("Enter m: "))
n = int(input("Enter n: "))
print("Output:", Calculate(m, n))