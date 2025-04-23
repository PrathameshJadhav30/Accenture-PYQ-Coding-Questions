# Problem: Sum of Distances Between Three Points

## Instructions:
You are required to write the code. You can click on compile & run anytime to check the compilation/ execution status of the program. The submitted code should be logically/syntactically correct and pass all the test cases.

## 🧮 Description:
The program is supposed to calculate the **sum of distances** between three 2D points from each other.

## 📌 Input:
Given three points:
- Point 1: (x1, y1)
- Point 2: (x2, y2)
- Point 3: (x3, y3)

### Example:

x1 = 1, y1 = 1
x2 = 2, y2 = 4
x3 = 3, y3 = 6

## 📏 Formula to Calculate Distance:
Distance between two points (x1, y1) and (x2, y2) = sqrt((x2 - x1)^2 + (y2 - y1)^2)

---

## ✅ C++ Solution

```
#include <iostream>
#include <cmath>
using namespace std;

double calculateDistance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int x1 = 1, y1 = 1;
    int x2 = 2, y2 = 4;
    int x3 = 3, y3 = 6;

    double dist1 = calculateDistance(x1, y1, x2, y2);
    double dist2 = calculateDistance(x2, y2, x3, y3);
    double dist3 = calculateDistance(x1, y1, x3, y3);

    double totalDistance = dist1 + dist2 + dist3;

    cout << "Total distance is: " << totalDistance << endl;

    return 0;
}
```

## ✅ Python Solution
```

import math

def calculate_distance(x1, y1, x2, y2):
    return math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)

x1, y1 = 1, 1
x2, y2 = 2, 4
x3, y3 = 3, 6

dist1 = calculate_distance(x1, y1, x2, y2)
dist2 = calculate_distance(x2, y2, x3, y3)
dist3 = calculate_distance(x1, y1, x3, y3)

total_distance = dist1 + dist2 + dist3

print("Total distance is:", total_distance)

```