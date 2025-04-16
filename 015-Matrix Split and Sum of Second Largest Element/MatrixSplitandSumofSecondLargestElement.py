n = int(input("Enter the size of array: "))

even_index = []
odd_index = []

for i in range(n):
    val = int(input(f"Enter element at {i} index: "))
    if i % 2 == 0:
        even_index.append(val)
    else:
        odd_index.append(val)

even_index.sort()
odd_index.sort()

print("Sorted even array:", *even_index)
print("Sorted odd array:", *odd_index)

second_largest_even = even_index[-2] if len(even_index) >= 2 else 0
second_largest_odd = odd_index[-2] if len(odd_index) >= 2 else 0

print(second_largest_even + second_largest_odd)
