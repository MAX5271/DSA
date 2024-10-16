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
    bool hasCycle(ListNode *head) {
        ListNode* temp = head;
        unordered_map<ListNode*, bool> a;
        a[head]=true;
        while(head!=NULL){
            if(a.find(head->next)!=a.end()){
                return true;
            }
            a[head->next]=true;
            head=head->next;
        }
        return false;
    }
};