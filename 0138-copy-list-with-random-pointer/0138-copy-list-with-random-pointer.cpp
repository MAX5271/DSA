/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void IAE(Node* head,int data){
        Node* temp = head;
        while(temp->next!=NULL) temp=temp->next;
        temp->next=new Node(data);
    }
    Node* copyRandomList(Node* head) {
        if(head==NULL) return NULL;
        Node* temp=head->next;
        Node* newHead = new Node(head->val);
        while(temp!=NULL){
            IAE(newHead,temp->val);
            temp=temp->next;
        }
        map<Node*,Node*> a;
        temp=head;
        Node* temp2=newHead;
        while(temp!=NULL){
            a[temp]=temp2;
            temp=temp->next;
            temp2=temp2->next;
        }
        temp=head,temp2=newHead;
        while(temp!=NULL){
            if(temp->random!=NULL)
            temp2->random=a[temp->random];
            temp=temp->next;
            temp2=temp2->next;
        }
        return newHead;
    }
};