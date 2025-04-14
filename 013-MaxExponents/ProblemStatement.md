
# Problem Statement

You are given a function:

    int MaxExponents(int a, int b);

You have to find and return the number between `a` and `b` (range inclusive on both ends) which has the **maximum exponent of 2**.

## Algorithm

1. Loop between `a` and `b`. Let the looping variable be `i`.
2. Find the exponent (power) of 2 for each `i`.
3. Store the number with the **maximum exponent of 2** encountered so far in a variable, say `maxNum`.
4. Set `maxNum` to `i` only if `i` has a higher exponent of 2 than the current `maxNum`.
5. In case of a tie (same exponent), return the **smaller number**.

### Assumption

- `a < b`

### Note

If two or more numbers in the range have the same exponents of 2, return the **smallest number** among them.

---

## Example

**Input:**
a = 7  
b = 12

**Output:**
8

**Explanation:**

Exponents of 2 for each number:
7  -> 0  
8  -> 3  
9  -> 0  
10 -> 1  
11 -> 0  
12 -> 2

The maximum exponent of 2 is **3**, which is for number **8**.

---



"""
# Problem Statement

You are given a function:

    def MaxExponents(a: int, b: int) -> int

You have to find and return the number between `a` and `b` (inclusive) which has the maximum exponent of 2.

## Algorithm

1. Loop between `a` and `b` inclusive.
2. For each number, count how many times it is divisible by 2.
3. Track the number with the maximum exponent.
4. In case of a tie, return the smallest number.

### Assumption: a < b

## Example

**Input:**
a = 7
b = 12

**Output:**
8

**Explanation:**
7  -> 0  
8  -> 3  
9  -> 0  
10 -> 1  
11 -> 0  
12 -> 2


