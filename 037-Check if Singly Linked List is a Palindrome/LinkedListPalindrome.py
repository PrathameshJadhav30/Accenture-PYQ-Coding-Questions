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