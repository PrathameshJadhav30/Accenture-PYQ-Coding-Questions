def print_fibonacci(n):
    a, b = 0, 1
    for _ in range(n):
        print(a, end=' ')
        a, b = b, a + b

n = int(input("Enter number of terms: "))
print("Fibonacci Series:")
print_fibonacci(n)