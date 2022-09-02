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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        ListNode* tmp, *Head;
        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;
        if (list1->val <= list2->val)
            {
                tmp = list1;
                list1 = list1->next;
            }
        else
            {
                tmp = list2;
                list2 = list2->next;
            }
        Head = tmp;
        while (list1 != NULL && list2 != NULL)
            {
                if (list1->val <= list2->val)
                    {
                        tmp->next = list1;
                        cout << "list 1 " << list1->val << endl;
                        list1 = list1->next;
                    }
                else
                    {
                        tmp->next = list2;
                        cout << "list 2 " << list2->val << endl;
                        list2 = list2->next;
                    }
                tmp = tmp->next;
            }
        while (list1)
            {
                tmp->next = list1;
                list1 = list1->next;
                tmp = tmp->next;
            }
        while (list2)
            {
                tmp->next = list2;
                list2 = list2->next;
                tmp = tmp->next;
            }
        tmp->next = NULL;
        return Head;
    }
};
// Time Complexity O(n+m)
// Space Complexity O(n+m)