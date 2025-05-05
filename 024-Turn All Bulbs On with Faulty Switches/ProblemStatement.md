# Problem: Turn All Bulbs On with Faulty Switches

## Problem Statement

You are given `N` light bulbs connected by a wire. Each bulb has a switch associated with it. However, due to faulty wiring, pressing a switch toggles the state (from `0` to `1` or from `1` to `0`) **of the current bulb and all the bulbs to its right**.

- You can press the same switch multiple times.
- You need to find the **minimum number of switch presses** required to turn **all bulbs ON**.
- A bulb is ON if its state is `1`, and OFF if its state is `0`.

### Input
- An array `A[]` of size `N` representing the initial state of bulbs.
  - `0` means the bulb is off
  - `1` means the bulb is on

### Output
- An integer representing the **minimum number of switches** you need to press to make all bulbs ON.

---

## Examples

### Example 1:
**Input:**

 A[] = [0, 1, 0, 1]

**Output:**

 4

**Explanation:**

Press switch 0: [1, 0, 1, 0] -> press 1

Press switch 1: [1, 1, 0, 1] -> press 2

Press switch 2: [1, 1, 1, 0] -> press 3

Press switch 3: [1, 1, 1, 1] -> press 4


### Example 2:
**Input:** 

 A[] = [1, 0, 0, 0, 0]

**Output:**

 1

***Explanation:***

Press switch 1: [1, 1, 1, 1, 1] -> press 1


---

## Solution Explanation

We can solve this greedily by scanning from left to right:
- Keep track of how many times we've toggled the state of the bulbs (using a `toggle` flag).
- For each bulb, if the current state (after `toggle`) is off (`0`), we need to press that switch.
- After pressing, flip the `toggle` flag.

This approach ensures that we press the minimum number of switches.

---

## C++ Implementation

```
#include <iostream>
#include <vector>
using namespace std;

int minSwitchPresses(vector<int>& A) {
    int toggle = 0;
    int count = 0;
    
    for (int i = 0; i < A.size(); ++i) {
        int currentState = A[i] ^ toggle;
        if (currentState == 0) {
            count++;
            toggle ^= 1; // Flip toggle
        }
    }
    return count;
}

int main() {
    vector<int> A = {0, 1, 0, 1};
    cout << "Minimum switches: " << minSwitchPresses(A) << endl;
    return 0;
}
```
## Python Implementation
```
def min_switch_presses(A):
    toggle = 0
    count = 0
    
    for i in range(len(A)):
        current_state = A[i] ^ toggle
        if current_state == 0:
            count += 1
            toggle ^= 1
    return count

# Example Usage
A = [0, 1, 0, 1]
print("Minimum switches:", min_switch_presses(A))
```
## Time and Space Complexity
Time Complexity: O(N), where N is the number of bulbs.

Space Complexity: O(1), as we use only a few variables regardless of input size.


