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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode(0);  
        ListNode* tail = dummy;             

        int z = 0, p = 0;                   

        while (l1 != nullptr || l2 != nullptr || p != 0) {

            int x = 0;                     
            if (l1 != nullptr) {
                x = l1->val;
                l1 = l1->next;              
            }

            int y = 0;                     
            if (l2 != nullptr) {
                y = l2->val;
                l2 = l2->next;             
            }

            int sum = x + y + p;
            z = sum % 10;                   
            p = sum / 10;                  

            tail->next = new ListNode(z);   
            tail = tail->next;             
        }

        return dummy->next;               
    }
};