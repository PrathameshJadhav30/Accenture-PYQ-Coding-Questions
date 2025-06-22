# 📉 Stock Price Decrease Counter 

## 🧩 Problem Statement
You are working on a financial analysing tool which represents daily stock prices of a company over time.  
Each element in an integer array `A` of size `N` represents the closing price of the stock for that particular day.  
Your task is to find and return an integer value representing the total number of **days where the stock price decreased** compared to the previous day.

---

## 📥 Input:
- Integer `N` representing the number of days.
- Array `A[]` of size `N` representing stock prices.

## 📤 Output:
- An integer representing the number of days the price decreased compared to the previous day.

---

## 🧪 Sample Test Cases:

### Input:
N = 6

A[] = {2, 3, 1, 4, 5, 2}

### Output:
2

### Input:
N = 1

A[] = {6}

### Output:
0

---

## ✅ C++ Code:
```cpp
#include <iostream>
using namespace std;

// Function to count days with decreased stock price
int countDecreasedDays(int A[], int N) {
    int count = 0;

    for (int i = 1; i < N; i++) {
        if (A[i] < A[i - 1]) {
            count++; // price decreased compared to previous day
        }
    }

    return count;
}

int main() {
    int N = 6;
    int A[] = {2, 3, 1, 4, 5, 2};

    cout << countDecreasedDays(A, N) << endl;
    return 0;
}
```

---

## ✅ Python Code:
```python
# Function to count the number of days stock price decreased
def count_decreased_days(A):
    count = 0
    for i in range(1, len(A)):
        if A[i] < A[i - 1]:
            count += 1
    return count

# Example usage
A = [2, 3, 1, 4, 5, 2]
print(count_decreased_days(A))  # Output: 2
```