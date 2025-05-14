def find_equilibrium_index(arr):
    total_sum = 0
    for i in range(len(arr)):
        total_sum += arr[i]

    left_sum = 0
    for i in range(len(arr)):
        total_sum -= arr[i]  # total_sum becomes right sum

        if left_sum == total_sum:
            return i

        left_sum += arr[i]

    return -1


arr = [3, 4, 3, 1, 6]
index = find_equilibrium_index(arr)
print("Equilibrium Index:", index)