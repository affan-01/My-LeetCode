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
    ListNode* find_list(vector <int> num)
    {
        ListNode* head = new ListNode;
        ListNode* curr = head;
        for(int i = 0 ; i < num.size() ; ++i)
        {
            ListNode* LLNode = new ListNode;
            LLNode->val = num[i];
            curr->next = LLNode;
            curr = LLNode;
        }
        return head->next;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry = 0 ;
        vector <int> num;
        while(l1 != NULL && l2 != NULL)
        {
            num.push_back((l1->val+l2->val+carry)%10);
            carry = (l1->val+l2->val+carry)/10;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1 != NULL)
        {
            num.push_back((l1->val+carry)%10);
            carry = (l1->val+carry)/10;
            l1 = l1->next;
        }
        while(l2 != NULL)
        {
            num.push_back((l2->val+carry)%10);
            carry = (l2->val+carry)/10;
            l2 = l2->next;
        }
        if(carry == 1)
            num.push_back(1);
        
        return find_list(num);
    }
   
};