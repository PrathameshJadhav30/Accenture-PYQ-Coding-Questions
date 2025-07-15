# 🧮 Problem: Sum of All Prime Numbers Less Than N

**Prepared By:** Prathamesh Jadhav  
**Branch:** Artificial Intelligence and Data Science Engineering  

---

## ✅ Problem Statement

Write a function that takes an integer `n` as input and returns the sum of all **prime numbers less than `n`**.

### 📥 Input:
n = 10

### 📤 Output:
17

### 🔎 Explanation:
Prime numbers less than 10 are: **2, 3, 5, 7**  
Sum = 2 + 3 + 5 + 7 = **17**

---

## 💻 C++ Solution

```cpp
#include<iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0){
           return false;
        } 
    }
    return true;
}

// Function to return sum of all primes less than n
int sumOfPrimes(int n) {
    int sum = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of primes less than " << n << " is: " << sumOfPrimes(n) << endl;
    return 0;
}
```
# 🐍 Python Solution
```
# Function to check if a number is prime
def is_prime(num):
    if num <= 1:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

# Function to return sum of all primes less than n
def sum_of_primes(n):
    return sum(i for i in range(2, n) if is_prime(i))

# Example
n = int(input("Enter a number: "))
print("Sum of primes less than", n, "is:", sum_of_primes(n))
```