# Problem: Maximum Favourite Songs in Playlist 

Alice has a collection of songs represented as a string `S` where each character represents a song. A playlist is a substring of the given string with exactly `K` number of songs. She wants to create a playlist that contains the maximum number of her favourite song which is `'a'`.

Your task is to find and return an integer value representing the maximum number of favourite songs that she can get in a single playlist.

### Input
S = "acdbaaca"

K = 3

### Output
2
### Explanation
Substrings of size 3 are:

"acd", "cdb", "dba", "baa", "aac", "aca"

The maximum number of `'a'`s in any of these substrings is 2.

### C++ Code

```cpp
#include <iostream>
#include <string>
using namespace std;

int maxFavouriteSongs(string S, int K) {
    int maxCount = 0;
    int count = 0;

    // Count 'a' in the first window
    for (int i = 0; i < K; i++) {
        if (S[i] == 'a'){
          count++;
        } 
    }
    maxCount = count;

    // Slide the window
    for (int i = K; i < S.length(); ++i) {
        if (S[i - K] == 'a'){
           count--;
        } 
        if (S[i] == 'a'){
          count++;
        } 
        maxCount = max(maxCount, count);
    }

    return maxCount;
}

int main() {
    string S = "acdbaaca";
    int K = 3;
    cout << maxFavouriteSongs(S, K) << endl; // Output: 2
    return 0;
}
```
### Python Code

```python
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
```