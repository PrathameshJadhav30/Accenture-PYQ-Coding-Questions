# LargeSmallSum Function

## Problem Statement
You are required to implement the following function:

```cpp
int LargeSmallSum(vector<int>& arr);
```

The function accepts an integer vector `arr` of size `length` as its argument. You are required to return the sum of:
- The **second largest** element from the even positions.
- The **second smallest** element from the odd positions.

## Assumptions
- All array elements are **unique**.
- Treat the **0th position** as an even position.

## Constraints
- Return `0` if the array is **empty**.
- Return `0` if the array length is **3 or less**.

## Example
### Input
```plaintext
arr = {3, 2, 1, 7, 5, 4};
```
### Output
```plaintext
7
```
### Explanation
- Even position elements: `{3, 1, 5}`
  - Sorted: `{1, 3, 5}`
  - Second largest: `3`
- Odd position elements: `{2, 7, 4}`
  - Sorted: `{2, 4, 7}`
  - Second smallest: `4`
- Sum: `3 + 4 = 7`

---

## Sample Test Cases

### Test Case 1
#### Input
```plaintext
arr = {1, 8, 0, 2, 3, 5, 6};
```
#### Output
```plaintext
8
```

### Test Case 2
#### Input
```plaintext
arr = {10, 20, 30};
```
#### Output
```plaintext
0
```

### Test Case 3
#### Input
```plaintext
arr = {};
```
#### Output
```plaintext
0
```

---

## Implementation Approach
1. **Check for Constraints**: If the array is empty or has 3 or fewer elements, return `0`.
2. **Separate Even and Odd Index Elements**:
   - Store elements at even indices in one list.
   - Store elements at odd indices in another list.
3. **Find the Second Largest from Even Indices**:
   - Sort the even-index elements.
   - Select the second largest element.
4. **Find the Second Smallest from Odd Indices**:
   - Sort the odd-index elements.
   - Select the second smallest element.
5. **Return the Sum** of the two selected elements.

---

## Edge Cases Considered
- Arrays with all elements in increasing or decreasing order.
- Arrays with exactly 4 elements.
- Arrays with numbers at extreme values (negative, zero, positive).

This function efficiently computes the required sum while handling edge cases properly.

