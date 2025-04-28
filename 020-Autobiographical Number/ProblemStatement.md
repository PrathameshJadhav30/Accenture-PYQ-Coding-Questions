# Autobiographical Number
## Problem Statement
An Autobiographical Number is a number N such that:

The first digit of N represents the count of how many 0s are there in N.

The second digit represents the count of how many 1s are there in N.

The third digit represents the count of how many 2s are there in N.

And so on.

You need to complete the function:
```
def FindAutoCount(n):
```
Where n is a string representing a number.


If the number is Autobiographical, return the count of distinct digits present in n.

Otherwise, return 0.

## Constraints
The input string will not exceed 10 characters.

Input will contain only numeric characters (0-9).

If input n is None, return 0.

# Example
**Input**

n = "1210"
## Explanation
At index 0, digit 1 ➔ there is one 0 in the number. ✅

At index 1, digit 2 ➔ there are two 1s in the number. ✅

At index 2, digit 1 ➔ there is one 2 in the number. ✅

At index 3, digit 0 ➔ there are zero 3s in the number. ✅

Since all the conditions match, it is an Autobiographical Number.

Distinct digits are: {0, 1, 2}

So, the output is 3.

**Output**

3
## Solutions
# Python Code 
```
def FindAutoCount(n):
    # If input is None, return 0
    if n is None:
        return 0

    length = len(n)
    count = [0] * 10  # Array to store count of digits from 0 to 9

    # Count occurrences of each digit
    for i in range(length):
        digit = int(n[i])
        count[digit] += 1

    # Validate if the number is autobiographical
    for i in range(length):
        expected_count = int(n[i])
        if count[i] != expected_count:
            return 0

    # Count unique digits
    unique_digits = []
    for i in range(length):
        if n[i] not in unique_digits:
            unique_digits.append(n[i])

    return len(unique_digits)

# Example usage
n = "1210"
print(FindAutoCount(n))  # Output: 3
```
# C++ Code 
```
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int FindAutoCount(string n) {
    if (n.empty()) return 0;

    int length = n.length();
    vector<int> count(10, 0); // Array to count occurrences of digits 0-9

    // Count occurrences of each digit
    for (int i = 0; i < length; i++) {
        int digit = n[i] - '0';
        count[digit]++;
    }

    // Validate if the number is autobiographical
    for (int i = 0; i < length; i++) {
        int expected_count = n[i] - '0';
        if (count[i] != expected_count)
            return 0;
    }

    // Count unique digits
    unordered_set<char> uniqueDigits;
    for (int i = 0; i < length; i++) {
        uniqueDigits.insert(n[i]);
    }

    return uniqueDigits.size();
}

int main() {
    string n;
    cout << "Enter the number: ";
    cin >> n;
    cout << FindAutoCount(n) << endl;
    return 0;
}
```
# Notes
Count Array: Use a size-10 array to record how many times each digit occurs.

Validation: Compare the digit at each index to the number of times that index appears.

Unique Count: For Python, we manually build a unique list; for C++, we use a unordered_set.

# Quick Steps
```
Step	Action
1	Count frequency of each digit using for loop.
2	Validate each index matches its expected count.
3	Build unique digits collection manually.
4	Return count of unique digits if valid; else 0.
```