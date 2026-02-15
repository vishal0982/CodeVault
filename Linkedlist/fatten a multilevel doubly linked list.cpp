/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/
class Solution {
public:
    Node* flatten(Node* head) {
        // Base case: empty list
        if(head==NULL)
            return head;
        
        Node* curr = head;

        // Traverse the list
        while(curr!=NULL){

            // If current node has a child
            if(curr->child){
                // Save the next node
                Node* l2 = curr->next;

                // Recursively flatten the child list
                Node* l1 = flatten(curr->child);

                // Connect current node to child list
                curr->next = l1;
                l1->prev = curr;

                // Remove child pointer as required
                curr->child = NULL;

                // Move to the end of the child list
                Node* temp = l1;
                while(temp->next!=NULL){
                    temp = temp->next;
                }

                // Connect the remaining original list
                temp->next = l2;
                if(l2)
                    l2->prev = temp;

                // Continue traversal
                curr = l2;
            }
            else{
                // No child, just move forward
                curr = curr->next;
            }
        }
        return head;
    }
};
 
