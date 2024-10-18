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
    ListNode* addTwoNumbers(ListNode* L1, ListNode* L2) {
        ListNode* l1=L1;
        ListNode* l2=L2;
       while(l1->next!=NULL||l2->next!=NULL){
        if(l1->next==NULL) {ListNode* temp =new ListNode(0); l1->next=temp;}
        if(l2->next==NULL) {ListNode* temp =new ListNode(0); l2->next=temp;}
        l1=l1->next;
        l2=l2->next;
       }    
       int carry=0;
       l1=L1;
       l2=L2;
       while(l1->next!=NULL&&l2->next!=NULL){
        int num1=l1->val,num2=l2->val;
        l1->val=(num1+num2+carry)%10;
        carry=(num1+num2+carry>9)?1:0;
        l1=l1->next;
        l2=l2->next;
       }
       int num1=l1->val,num2=l2->val;
        l1->val=(num1+num2+carry)%10;
        carry=(num1+num2+carry>9)?1:0;
       if(carry) l1->next=new ListNode(1);
       return L1;

    }
};