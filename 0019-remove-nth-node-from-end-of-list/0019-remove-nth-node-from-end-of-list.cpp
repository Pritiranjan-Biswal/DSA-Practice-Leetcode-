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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n==0)
        delete head;
        
        int count=0;
        ListNode *temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        int del=count-n;
        if(del==0) {
            ListNode *t=head;
            head=head->next;
            delete t;
            return head;
        }
        ListNode *curr=head;
        ListNode *prev=NULL;
        while(del--) {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        delete curr;

        return head;
    }
};