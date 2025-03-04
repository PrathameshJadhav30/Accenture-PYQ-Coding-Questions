# Password Checker

**Problem Statement:**

**Question : Password Checker**  


You are given a function:
```c
int CheckPassword(char str[], int n);
```
The function accepts a string `str` of size `n` as an argument. Implement the function which returns `1` if the given string `str` is a valid password, else returns `0`.

### **Password Validity Criteria:**
A string `str` is considered a valid password if it satisfies the following conditions:
- At least **4 characters** long
- Contains at least **one numeric digit**
- Contains at least **one capital letter**
- Must **not** contain a **space** or **slash ('/')**
- The **starting character must not be a number**

### **Assumption:**
- The input string will **not** be empty.

---

### **Example:**

#### **Input 1:**
```
aA1_67
```
#### **Output 1:**
```
1
```

#### **Input 2:**
```
a987 abC012
```
#### **Output 2:**
```
0
```

---

### **Explanation:**
- **Example 1:** `aA1_67`
  - ✅ Length >= 4
  - ✅ Contains a numeric digit (`1, 6, 7`)
  - ✅ Contains a capital letter (`A`)
  - ✅ No space or `/`
  - ✅ First character is not a number (`a`)
  - **Result:** Valid password → Output `1`

- **Example 2:** `a987 abC012`
  - ❌ Contains a space (`abC012` has a space)
  - **Result:** Invalid password → Output `0`

---

### **Function Signature:**
```c
int CheckPassword(char str[], int n);
```

This function should implement the above checks and return `1` if the password is valid, otherwise return `0`.

---

