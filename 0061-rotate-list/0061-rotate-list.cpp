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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0||head==nullptr) return head;
        vector<int> a;
        ListNode* temp=head;
        while(temp!=nullptr){
            a.push_back(temp->val);
            temp=temp->next;
        }
        k=k%a.size();
        temp=head;
        for(int i=0;i<a.size();i++){
            temp->val=a[(a.size()+i-k)%a.size()];
            temp=temp->next;
        }
        return head;
    }
};