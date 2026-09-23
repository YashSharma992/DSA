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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>ans;
        for(ListNode* curr:lists){
            while(curr){
                ans.push_back(curr->val);
                curr=curr->next;
            }
        }
        sort(ans.begin(),ans.end());
        if(ans.size()==0)
        return NULL;
        ListNode*head=new ListNode(ans[0]);
        ListNode*temp=head;
        for(int i=1;i<ans.size();i++){
            ListNode*nex=new ListNode(ans[i]);
            temp->next=nex;
            temp=nex;
        }
        return head;



        // vector<ListNode*> arr;

        // // Store all nodes in vector
        // for (ListNode* head : lists) {
        //     while (head) {
        //         arr.push_back(head);
        //         head = head->next;
        //     }
        // }

        // // Sort nodes by value
        // sort(arr.begin(), arr.end(), [](ListNode* a, ListNode* b) {
        //     return a->val < b->val;
        // });

        // // If no nodes
        // if (arr.empty())
        //     return NULL;

        // // Connect nodes
        // for (int i = 0; i < arr.size() - 1; i++) {
        //     arr[i]->next = arr[i + 1];
        // }

        // arr.back()->next = NULL;

        // return arr[0];
    }
};