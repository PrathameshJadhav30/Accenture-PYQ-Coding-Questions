# 🧮 Quadratic Equation Root Finder

This program calculates the **roots of a quadratic equation** of the form:

ax^2 + bx + c = 0


Using the quadratic formula:

x = (-b ± √(b² - 4ac)) / (2a)


---

## ✅ C++ Code

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two real and distinct roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (discriminant == 0) {
        // One real root
        double root = -b / (2 * a);
        cout << "Roots are real and same." << endl;
        cout << "Root = " << root << endl;
    }
    else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and imaginary." << endl;
        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}
```
# ✅ Python Code
```
import cmath

# Input coefficients
a = float(input("Enter coefficient a: "))
b = float(input("Enter coefficient b: "))
c = float(input("Enter coefficient c: "))

# Calculate discriminant
discriminant = b**2 - 4*a*c

# Using complex math for general case (handles real + complex)
root1 = (-b + cmath.sqrt(discriminant)) / (2 * a)
root2 = (-b - cmath.sqrt(discriminant)) / (2 * a)

# Output roots
if discriminant > 0:
    print("Roots are real and different.")
elif discriminant == 0:
    print("Roots are real and same.")
else:
    print("Roots are complex and imaginary.")

print("Root 1 =", root1)
print("Root 2 =", root2)
```
🧑‍💻 Created by: Prathamesh Jadhav  
🎓 Branch: Artificial Intelligence and Data Science Engineering
