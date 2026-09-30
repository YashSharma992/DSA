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
    ListNode* partition(ListNode* head, int x) {
        ListNode*dummy=new ListNode(-1);
        ListNode*curr=dummy;
        ListNode*temp=head;
        while(temp){
            if(temp->val<x){
                ListNode*NN=new ListNode(temp->val);
                curr->next=NN;
                curr=NN;
            }
            temp=temp->next;
        }
        temp=head;
        while(temp){
            if(temp->val>=x){
                ListNode*NN=new ListNode(temp->val);
                curr->next=NN;
                curr=NN;
            }
            temp=temp->next;
        }
        return dummy->next;
    }
};