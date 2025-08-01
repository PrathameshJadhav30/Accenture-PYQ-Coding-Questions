def fibonacci(n):
    if n == 0:
        return 0
    if n == 1:
        return 1

    a, b = 0, 1
    for _ in range(2, n + 1):
        a, b = b, a + b

    return b

# Input from user
n = int(input("Enter the index (n): "))
print("Nth Fibonacci number is:", fibonacci(n))