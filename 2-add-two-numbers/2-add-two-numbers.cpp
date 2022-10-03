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
        ListNode* dummyHead = new ListNode;
        ListNode* curr = dummyHead; 
        int carry = 0 ;
        while(l1 != NULL || l2 != NULL || carry != 0)
        {
            int x , y ;
            if(l1 != NULL)
                x = l1->val;
            else
                x = 0 ;
            if(l2 != NULL)
                y = l2->val;
            else
                y = 0;
            int sum = x+y+carry;
            carry = sum/10;
            ListNode* node = new ListNode;
            curr->next = node;
            node->val = sum%10;
            curr = curr->next;
            if(l1 != NULL)
                l1 = l1->next;
            if(l2 != NULL)
                l2 = l2->next;
            
                
        }
        return dummyHead->next;
    }
};