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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (k == 1) {
            return head;
        } else {
            ListNode* temp = head;
            for (int i = 0; i < k - 1 && temp != NULL; i++) {
                temp = temp->next;
            }
            for (ListNode* start = head; start != NULL && start->next != NULL;) {
                ListNode* t1 = start;
                ListNode* t2 = start->next;
                ListNode* t3 = t2->next;
                // cout<<start->data<<" "<<t2->next->data<<endl;
                for (int i = 0; i < k - 1 && t2 != NULL; i++) {
                    t2->next = t1;
                    t1 = t2;
                    t2 = t3;
                    if (t3 != NULL)
                        t3 = t3->next;
                }
                ListNode* temp1 = t2;
                // cout<<temp1->data<<endl;
                int i = 0;
                for (; i < k - 1 && temp1 != NULL && temp1->next != NULL; i++) {
                    temp1 = temp1->next;
                }
                if (i == k - 1) {
                    start->next = temp1;
                    start = t2;
                } else {
                    start->next = t2;
                    break;
                }
            }
            // cout<<temp->next->next->next->data;
            return temp;
        }
    }
};