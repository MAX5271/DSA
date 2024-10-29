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
        ListNode* tempa=headA;
        ListNode* tempb=headB;
        int ca=0,cb=0;
        while(tempa!=nullptr) {
            ca++;
            tempa=tempa->next;
        }
        while(tempb!=nullptr){
            cb++;
            tempb=tempb->next;
        }
        if(ca>cb){
            int diff=ca-cb;
            tempa=headA;
            for(int i=0;i<diff;i++) tempa=tempa->next;
            tempb=headB;
            while(tempa!=nullptr&&tempb!=nullptr){
                if(tempa==tempb) return tempa;
                tempa=tempa->next;
                tempb=tempb->next;
            }
            return nullptr;
        }else{
            int diff=cb-ca;
            tempa=headA;
            tempb=headB;
            for(int i=0;i<diff;i++) tempb=tempb->next;
            while(tempa!=nullptr&&tempb!=nullptr){
                if(tempa==tempb) return tempa;
                tempa=tempa->next;
                tempb=tempb->next;
            }
            return nullptr;
        }
        return nullptr;
    }
};