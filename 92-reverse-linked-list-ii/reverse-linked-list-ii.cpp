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
 ListNode* rev(ListNode*head){
    if(!head||!head->next)
    return head;
    ListNode*newhead=rev(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right)
            return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;

        for (int i = 1; i < left; i++)
            prev = prev->next;

        ListNode* start = prev->next;
        ListNode* end = start;

        for (int i = left; i < right; i++)
            end = end->next;

        ListNode* after = end->next;
        end->next = NULL;

        prev->next = rev(start);
        start->next = after;

        return dummy->next;



        // if(!head||(left==right))
        // return head;
        // ListNode*temp=head;
        // for(int i=1;i<left;i++){
        //     temp=temp->next;
        // }
        // temp->next=rev(temp->next);
        // ListNode* after = temp;
        // for(int i=left;i<right;i++){
        //     temp=temp->next;
        // }
        // temp->next=rev(temp->next);
        // return head;

        // ListNode*temp1=head;
        // ListNode*temp2=head;
        // while(temp->next){
        //     if(cnt==left){
        //         temp1=temp;
        //     }
        //     if(cnt==right){
        //         temp2=temp;
        //     }
        //     temp=temp->next;
        //     cnt++;
        // }
        // ListNode*next=temp2->next;
        // temp2->next=NULL;
        // temp2=rev(temp1);
        // return head;
    }
};