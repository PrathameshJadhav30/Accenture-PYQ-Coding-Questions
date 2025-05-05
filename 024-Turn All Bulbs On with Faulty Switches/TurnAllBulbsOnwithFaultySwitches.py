def min_switch_presses(A):
    toggle = 0
    count = 0
    
    for i in range(len(A)):
        current_state = A[i] ^ toggle
        if current_state == 0:
            count += 1
            toggle ^= 1
    return count


A = [0, 1, 0, 1]
print("Minimum switches:", min_switch_presses(A))