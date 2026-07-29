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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p = list1;
        ListNode* q = list2;
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        while(p && q) {
            if(p->val >= q->val) {
                temp->next = q;
                q = q->next;
            } else {
                temp->next = p;
                p = p->next;
            }

            temp = temp->next;
        }

        if(p)
            temp->next = p;

        if(q)
            temp->next = q;

        return dummy->next;
    }
};