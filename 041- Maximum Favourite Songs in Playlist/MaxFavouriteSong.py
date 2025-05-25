def max_favourite_songs(S: str, K: int) -> int:
    count = S[:K].count('a')
    max_count = count

    for i in range(K, len(S)):
        if S[i - K] == 'a':
            count -= 1
        if S[i] == 'a':
            count += 1
        max_count = max(max_count, count)

    return max_count

# Example usage
S = "acdbaaca"
K = 3
print(max_favourite_songs(S, K))  # Output: 2