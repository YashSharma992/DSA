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
       if(!head||k<=1)
       return head;
       ListNode*temp=head;
       for(int i=0;i<k;i++){
        if(!temp)
        return head;
        temp=temp->next;
       }
       ListNode*curr=head;
       ListNode*prev=NULL;
       for(int i=0;i<k;i++){
        ListNode*nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
       }
       head->next = reverseKGroup(curr, k);
       return prev;

    //  int var=k;
    //    if(!head||k<=1)
    //    return head;
    //    ListNode*temp=head;
    //    while(k--){
    //     if(!temp)
    //     return head;
    //     temp=temp->next;
    //    }
    //    ListNode*curr=head;
    //    ListNode*prev=NULL;
    //    //ListNode*next=curr->next;
    //    ListNode*st=temp->next;
    //    temp->next=NULL;
    //    while(curr->next){
    //     ListNode*nex=curr->next;
    //     curr->next=prev;
    //     prev=curr;
    //     curr=nex;
    //     nex=nex->next;
    //    }
    //    curr->next=temp->next;
    //    curr=temp->next;
    //    head->next = reverseKGroup(curr, k);
    //    return prev;
    }
};