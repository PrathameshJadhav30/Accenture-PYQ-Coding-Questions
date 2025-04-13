def OperationChoices(c, a, b):
    if c == 1:
        return a + b
    elif c == 2:
        return a - b
    elif c == 3:
        return a * b
    elif c == 4:
        return a // b  # Assuming integer division and b != 0
    else:
        return 0  # Default case

c = int(input("Enter operation code (1-4): "))
a = int(input("Enter value of a: "))
b = int(input("Enter value of b: "))
print("Result:", OperationChoices(c, a, b))