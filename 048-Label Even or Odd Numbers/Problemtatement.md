# Problem: Label Even or Odd Numbers

Jack has an array of length `N`. He wants to label whether the numbers in the array are even or odd.  
Your task is to help find and return a string with labels `"even"` or `"odd"` in sequence according to which the numbers appear in the array.

---

## 🧾 Input:
N = 6

arr = [1, 2, 3, 4, 5, 6]

## ✅ Output:
"odd even odd even odd even"


---

## 💡 C++ Solution

```cpp
#include<iostream>
#include<vector>
using namespace std;

string labelEvenOrOddNumbers(const vector<int>& arr) {
    string result;
    for (int num : arr) {
        if (num % 2 == 0) {
            result += "Even ";
        } else {
            result += "Odd ";
        }
    }
    return result;
}
int main() {
    int N = 6;
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    
    string output = labelEvenOrOddNumbers(arr);
    cout << output << endl;  // Output: odd even odd even odd even

    return 0;
}
```
# 💡 Python Solution
```
def label_even_odd(arr):
    result = []
    for num in arr:
        if num % 2 == 0:
            result.append("even")
        else:
            result.append("odd")
    return " ".join(result)

# Driver Code
N = 6
arr = [1, 2, 3, 4, 5, 6]

output = label_even_odd(arr)
print(output)  # Output: odd even odd even odd even
```