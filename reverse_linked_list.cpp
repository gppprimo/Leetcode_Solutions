/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func reverseList(head *ListNode) *ListNode {
    curr := head
    var prev *ListNode
    for curr != nil {
        tmp := *curr
        curr.Next = prev
        prev = curr
        curr = tmp.Next
    }
    return prev
}
