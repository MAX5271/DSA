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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* temp=head;
        if(n==1&&temp->next==NULL) return NULL;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        temp=head;
        if(n==1){
            while(temp->next->next!=NULL) temp=temp->next;
            temp->next=NULL;
            return head;
        }
        for(int i=1;i<=count-n;i++){
            temp=temp->next;
        }
        if(temp->next!=NULL) {
            temp->val=temp->next->val;
            temp->next=temp->next->next;
        }
        return head;
    }
};