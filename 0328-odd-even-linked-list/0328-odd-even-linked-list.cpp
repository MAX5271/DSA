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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL||head->next==NULL||head->next->next==NULL) return head;
        ListNode* temp = head->next;
        ListNode* temp1=head;
        ListNode* temp3 = head->next;
        while(temp!=NULL&&temp->next!=NULL){
            temp1->next=temp->next;
            temp->next=temp1->next->next;
            temp=temp1->next->next;
            temp1=temp1->next;
        }
        temp1->next=temp3;
        return head; 
    }
};