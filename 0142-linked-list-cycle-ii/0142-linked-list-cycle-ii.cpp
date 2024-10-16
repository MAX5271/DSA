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
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int> a;
        a[head]++;
        while(head!=NULL){
            if(a.find(head->next)!=a.end()){
                return head->next;
            }
            a[head->next]++;
            head=head->next;
        }
        return NULL;
    }
};