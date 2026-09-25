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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy= new ListNode(0,head);
        ListNode* prev=dummy;
        while(prev->next && prev->next->next){
            ListNode* first=prev->next;
            ListNode* sec=prev->next->next;

            prev->next=sec;
            first->next=sec->next;
            sec->next=first;

            prev=first;
        }
        return dummy->next;



    //    if(!head)
    //    return head;
    //    ListNode*temp=head;
    //    for(int i=0;i<2;i++){
    //     if(!temp)
    //     return head;
    //     temp=temp->next;
    //    }
    //    ListNode*curr=head;
    //    ListNode*prev=NULL;
    //    for(int i=0;i<2;i++){
    //     ListNode*nex=curr->next;
    //     curr->next=prev;
    //     prev=curr;
    //     curr=nex;
    //    }
    //    head->next = swapPairs(curr);
    //    return prev;

        // vector<int>ans;
        // ListNode*temp=head;
        // while(temp){
        //     ans.push_back(temp->val);
        //     temp=temp->next;
        // }
        // for(int i=0;i+1<ans.size();i+=2){
        //     swap(ans[i],ans[i+1]);
        // }
        // temp=head;
        // int i=0;
        // while(temp){
        //     temp->val=ans[i];
        //     temp=temp->next;
        //     i++;
        // }
        // return head;
    }
};