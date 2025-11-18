/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* current = head;

    // Traverse the list
    while (current != NULL && current->next != NULL) {
        if (current->val == current->next->val) {
            // skip duplicate node
            current->next = current->next->next;
        } else {
            current = current->next;  // move forward
        }
    }

    return head;
}
