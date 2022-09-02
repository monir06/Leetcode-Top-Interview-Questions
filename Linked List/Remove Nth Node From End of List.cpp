/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        int c = n;
        // two tortoise run
        // fast & slow pointer
        ListNode *fast = head, *slow = head;
        while (c--) fast = fast->next;
        if (fast == NULL) return head->next; // n=sz, so need to remove first node and return next
        while (fast->next != NULL) // traverse till last node, slow will approach the previous of the expected node that needs to be removed
            // because fast is one node ahead (line 18)
            {
                slow = slow->next;
                fast = fast->next;
            }
        slow->next = slow->next->next;
        // to remove set prev node's next to current node's next , so it removes the current
        return head;
    }
};
// Time Complexity O(n)
// Space Complexity O(1)