n = int(input("Enter a Number: "))
sum_ = 0

for i in range(1, 11):
    multiple = n * i
    print(multiple, end=", " if i < 10 else "\n")
    sum_ += multiple

print(sum_)