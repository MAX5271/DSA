/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int> table;
        ListNode* a = headA;
        ListNode* b = headB;
        while(a!=NULL){
            table[a]++;
            a=a->next;
        }
        while(b!=NULL){
            table[b]++;
            b=b->next;
        }
        a=headA;
        b=headB;
        while(a!=NULL){
            if(table[a]==2) return a;
            a=a->next;
        }
        while(b!=NULL){
            if(table[b]==2) return b;
            b=b->next;
        }
        return NULL;
    }
};