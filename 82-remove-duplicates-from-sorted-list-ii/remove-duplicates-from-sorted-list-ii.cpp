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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*temp=head;
        vector<int>arr;
        while(temp) {
            int count = 0;
            int x = temp->val;

            while(temp && temp->val == x) {
                count++;
                temp = temp->next;
            }

            if(count == 1)
                arr.push_back(x);
        }

        if(arr.empty())
            return NULL;
        ListNode* head1=new ListNode(arr[0]);
        temp=head1;
        for(int i=1;i<arr.size();i++){
            temp->next=new ListNode(arr[i]);
            temp=temp->next;
        }
        return head1;
    }
};