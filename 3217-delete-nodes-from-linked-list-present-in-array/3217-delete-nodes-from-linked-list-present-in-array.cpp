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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* temp = head, *prev = nullptr;
        unordered_set<int> seen;
        for(int n: nums)
            seen.insert(n);

        while(temp) {
            if(seen.count(temp->val)) {
                
                if(temp == head) {
                    head = head->next;
                } else {
                    prev->next = temp->next;
                }

                // ListNode* toDel = temp;
                temp = temp->next;
                // delete toDel;

            } else {
                prev = temp;
                temp = temp->next;
            }
        }

        return head;
    }
};