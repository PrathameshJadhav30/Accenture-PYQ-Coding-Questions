# 💡 Problem Statement: Operation Choices

You are required to implement the following function:

### Function Signature
`int OperationChoices(int c, int a, int b);`

The function accepts 3 positive integers `a`, `b`, and `c` as its arguments. Implement the function to return:

- `(a + b)` if `c == 1`  
- `(a - b)` if `c == 2`  
- `(a * b)` if `c == 3`  
- `(a / b)` if `c == 4`  

📌 **Assumption**: All operations will result in **integer output**.

---

## 🔢 Example 1

**Input:**  
```
c = 1  
a = 12  
b = 16
```

**Output:**  
```
28
```

**Explanation:**  
Since `c = 1`, the operation is `(12 + 16) = 28`.

---

## 🔢 Example 2

**Input:**  
```
c = 2  
a = 16  
b = 20
```

**Output:**  
```
-4
```

**Explanation:**  
Since `c = 2`, the operation is `(16 - 20) = -4`.

---

## ✅ C++ Implementation

```cpp
#include <iostream>
using namespace std;

int OperationChoices(int c, int a, int b) {
    if (c == 1)
        return a + b;
    else if (c == 2)
        return a - b;
    else if (c == 3)
        return a * b;
    else if (c == 4)
        return a / b; // Assuming integer division and b != 0
    else
        return 0; // Default case
}

int main() {
    int c, a, b;
    cout << "Enter operation code (1-4): ";
    cin >> c;
    cout << "Enter values of a and b: ";
    cin >> a >> b;
    cout << "Result: " << OperationChoices(c, a, b) << endl;
    return 0;
}
```

---

## ✅ Python Implementation

```python
def OperationChoices(c, a, b):
    if c == 1:
        return a + b
    elif c == 2:
        return a - b
    elif c == 3:
        return a * b
    elif c == 4:
        return a // b  # Assuming integer division and b != 0
    else:
        return 0  # Default case

# Example usage
c = int(input("Enter operation code (1-4): "))
a = int(input("Enter value of a: "))
b = int(input("Enter value of b: "))
print("Result:", OperationChoices(c, a, b))
```
