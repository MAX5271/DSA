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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp1=head;
        ListNode* prev=NULL;
        if(head==NULL) return head;
        ListNode* n=temp1->next;
        while(temp1!=NULL){
            temp1->next=prev;
            prev=temp1;
            temp1=n;
            if(temp1!=NULL)
            n=temp1->next;
        }
        return prev;
    }
};