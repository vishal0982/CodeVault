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
        if(!head||!head->next||k==0) return head;
        ListNode*t=head;
        int n=0;
        while(t){
            n++;
            t=t->next;

        }
        k=k%n;
        while(k){
       ListNode*temp= head;
       ListNode* prev= NULL;
       while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
       }
       temp->next=head;
       prev->next=NULL;
       head=temp;
       k--;

        }
        return head;
    }
};
