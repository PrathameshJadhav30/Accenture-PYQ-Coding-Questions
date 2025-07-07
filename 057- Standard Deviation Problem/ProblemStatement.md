# 📊 Standard Deviation Problem

## 🧮 Problem Statement:
Write a program to calculate the **standard deviation** of a list of numbers.

The **standard deviation** is a measure of the amount of variation or dispersion in a set of values.

### 🔢 Formula:
Standard Deviation (σ) =  
√(∑(xᵢ - μ)² / n)  
Where:  
- xᵢ = each value  
- μ = mean of values  
- n = number of values  

---

## ✅ Example:
**Input:**  
Numbers: [10, 20, 30, 40, 50]  

**Output:**  
Standard Deviation: 14.1421

---

## 🧾 C++ Solution

```cpp
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<double> nums = {10, 20, 30, 40, 50};
    int n = nums.size();
    
    // Calculate mean
    double sum = 0;
    for (double num : nums) {
        sum += num;
    }
    double mean = sum / n;

    // Calculate variance
    double variance = 0;
    for (double num : nums) {
        variance += pow(num - mean, 2);
    }
    variance /= n;

    // Standard deviation
    double stdDeviation = sqrt(variance);

    cout << "Standard Deviation: " << stdDeviation << endl;
    return 0;
}
```
# 🐍 Python Solution
```
import math

# Sample data
nums = [10, 20, 30, 40, 50]

# Calculate mean
mean = sum(nums) / len(nums)

# Calculate variance
variance = sum((x - mean) ** 2 for x in nums) / len(nums)

# Standard deviation
std_deviation = math.sqrt(variance)

print("Standard Deviation:", round(std_deviation, 4))
```
