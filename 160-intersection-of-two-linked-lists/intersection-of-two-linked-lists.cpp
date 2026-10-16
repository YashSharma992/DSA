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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*first=headA;
        ListNode*second=headB;
        int cnt=0;
        while(first != second && cnt<=2){
            if(second->next==NULL){
            second=headA;
            cnt++;
            }
            else
            second=second->next;
            if(first->next==NULL){
                first=headB;
                cnt++;
            }
            else
            first=first->next;
        }
            if(first==second)
            {
                return first;
            }
        return NULL;
    }
};