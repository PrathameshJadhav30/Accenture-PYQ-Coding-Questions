# Binary String Operations

## Problem Description

The Binary number system only uses two digits, 0 and 1, and the number system can be called a binary string. You are required to implement the following function:

```c
int OperationsBinaryString(char* str);
```

### Function Details
The function accepts a string `str` as its argument. The string `str` consists of binary digits separated with an alphabet representing an operation as follows:

- `A` denotes AND operation
- `B` denotes OR operation
- `C` denotes XOR operation

You are required to calculate the result of the string `str`, scanning the string from left to right, taking one operation at a time, and return the final result.

### Notes:
- No order of priorities of operations is required.
- The length of `str` is always odd.
- If `str` is NULL or None (in case of Python), return `-1`.

## Example Cases

### Example 1
**Input:**  
```c
str: "1C0C1C1A0B1"
```

**Expanded Expression:**  
```c
1 XOR 0 XOR 1 XOR 1 AND 0 OR 1
```

**Output:**  
```c
1
```

### Example 2
**Input:**  
```c
str: "0C1A1B1C1C1B0A0"
```

**Output:**  
```c
0
```

