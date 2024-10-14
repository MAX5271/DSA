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
    ListNode* middleNode(ListNode* head) {
        
        if(head->next==NULL) return head;
        else if(head->next->next==NULL) return head->next;
        ListNode* slow=head->next; ListNode* fast=head->next->next;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            if(fast->next!=NULL) fast=fast->next->next;
            else break;
        }
        return slow;
    }
};