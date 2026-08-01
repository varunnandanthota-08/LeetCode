// Last updated: 8/2/2026, 1:04:14 AM
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>ans;
        int c=1;
        ListNode *temp=head;
        while(temp!=NULL){
            if(c>=left&&c<=right){
                ans.push_back(temp->val);
            }
            temp=temp->next;
            c++;
        }
        ListNode *curr=head;
        int cnt=1,k=ans.size()-1;
        while(curr!=NULL){
            if(cnt>=left&&cnt<=right){
                curr->val=ans[k--];
            }
            curr=curr->next;
            cnt++;
        }
        return head;
    }
};