# 🧠 Problem: Check if Singly Linked List is a Palindrome

## ✅ Problem Statement

Given the `head` of a singly linked list, return `true` if it is a palindrome or `false` otherwise.

### Example

- **Input:** `head = [1, 2, 2, 1]`  
- **Output:** `true`

## 🔍 Explanation

A linked list is considered a palindrome if the sequence of its elements reads the same forward and backward.

For the input `[1, 2, 2, 1]`, the sequence from the head to the tail is the same as the reverse sequence. Hence, it is a palindrome.

---

## 🧠 Approach

1. **Find the middle** of the linked list using the slow and fast pointer technique.
2. **Reverse the second half** of the list.
3. **Compare the first and second halves** element by element.
4. Restore the list (optional).
5. Return `true` if all elements matched, else `false`.

---

## 💡 C++ Solution

```cpp
#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to reverse a linked list
ListNode* reverse(ListNode* head) {
    ListNode* prev = NULL;
    while (head) {
        ListNode* nextNode = head->next;
        head->next = prev;
        prev = head;
        head = nextNode;
    }
    return prev;
}

// Function to check if a linked list is palindrome
bool isPalindrome(ListNode* head) {
    if (!head || !head->next) return true;

    // Step 1: Find the middle using slow and fast pointers
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Step 2: Reverse the second half
    ListNode* secondHalf = reverse(slow);

    // Step 3: Compare both halves
    ListNode* firstHalf = head;
    while (secondHalf) {
        if (firstHalf->val != secondHalf->val)
            return false;
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    return true;
}

// Helper to create linked list and test
int main() {
    // Create list: 1 -> 2 -> 2 -> 1
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);

    if (isPalindrome(head))
        cout << "The linked list is a palindrome." << endl;
    else
        cout << "The linked list is not a palindrome." << endl;

    return 0;
}
```
# ✅ Python Full Code
```
# Definition for singly-linked list
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

# Function to reverse a linked list
def reverse(head):
    prev = None
    while head:
        next_node = head.next
        head.next = prev
        prev = head
        head = next_node
    return prev

# Function to check if the linked list is a palindrome
def isPalindrome(head):
    if not head or not head.next:
        return True

    # Step 1: Find middle using slow and fast pointers
    slow = fast = head
    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next

    # Step 2: Reverse second half of the list
    second_half = reverse(slow)

    # Step 3: Compare first half and second half
    first_half = head
    while second_half:
        if first_half.val != second_half.val:
            return False
        first_half = first_half.next
        second_half = second_half.next

    return True

# Helper to create linked list and test
# Create list: 1 -> 2 -> 2 -> 1
head = ListNode(1)
head.next = ListNode(2)
head.next.next = ListNode(2)
head.next.next.next = ListNode(1)

# Test the function
if isPalindrome(head):
    print("The linked list is a palindrome.")
else:
    print("The linked list is not a palindrome.")
```
# 🧠 Time and Space Complexity
Time Complexity: O(n) — Traverses the list a few times.

Space Complexity: O(1) — Reverses the list in-place without extra memory.