def min_houses(r, unit, arr):
    if len(arr) == 0:
        return -1  # Return -1 if the array is empty

    required_food = r * unit
    current_food = 0

    for i in range(len(arr)):
        current_food += arr[i]
        if current_food >= required_food:
            return i + 1  # Houses are counted from 1

    return 0  # If food is insufficient

# Example usage:
r = 7
unit = 2
arr = [2, 8, 3, 5, 7, 4, 1, 2]
print(min_houses(r, unit, arr))
