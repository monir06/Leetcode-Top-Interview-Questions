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
    ListNode* reverseList(ListNode* head)
    {
        // 1-> 2 -> 3 -> 4 -> 5 -> NULL
        // NULL <- 1 <- 2 <- 3 <- 4 <- 5
        ListNode *prev = NULL, *curr = NULL, *ahead; // set curr=NULL for edge case (empty list)
        // set prev to NULL so for first node(it's prev=NULL) after reversing it becomes last and its prev=NULL
        while (head != NULL)
            {
                curr = head; // set current node to head
                ahead = head->next; // the next node of current is stored in ahead
                curr->next = prev; // to reverse we need to disconnect curr->next from ahead(1->2) and connect to prev(1->NULL)
                prev = curr; // now we set prev ready for next iteration by updating to curr
                head = ahead; // to traverse original list we go to next of head which is stored in ahead
            }
        return curr; // return the current node which becomes head after traverse (last node becomes first/head node)
    }
};
// Time Complexity O(n+m)
// Space Complexity O(1)