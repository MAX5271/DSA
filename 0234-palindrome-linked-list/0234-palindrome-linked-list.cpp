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
    ListNode* rev(ListNode* head){
        if(head==NULL||head->next==NULL) return head;
        ListNode* r=rev(head->next);
        head->next->next=head;
        head->next=NULL;
        return r;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        temp=head;
        if(count==1) return true;
        else if(count==2){
            if(temp->val==temp->next->val) return true;
            else return false;
        } 
        temp=head;
        for(int i=1;i<=(count+1)/2;i++){
            temp=temp->next;
        }
        // if(count%2==0)
        // temp=temp->next;
        temp=rev(temp);
        for(int i=1;i<=count/2&&head!=NULL&&temp!=NULL;i++){
            if(head->val!=temp->val) return false;
            head=head->next;
            temp=temp->next;
        }
        return true;
    }
};