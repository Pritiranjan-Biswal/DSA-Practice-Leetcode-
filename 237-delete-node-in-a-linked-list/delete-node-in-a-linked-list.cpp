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
    void deleteNode(ListNode* node) {

        // so here we have given a linkedlist and our work is to delete a node , with deleting the node.

        //so simply create a temp node int eh node->next and move the value and the next into node and delete the temp.
        ListNode* temp= node->next;
        node->val= temp->val;
        node->next= temp->next;
        delete temp;
        

    }
};