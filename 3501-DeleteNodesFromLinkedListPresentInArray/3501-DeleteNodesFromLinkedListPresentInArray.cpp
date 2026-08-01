// Last updated: 8/2/2026, 12:55:43 AM
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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>st(nums.begin(),nums.end());
        while(head){
            int val=head->val;
            if(st.count(val)){
                head=head->next;
            }
            else{
                break;
            }
        }
        ListNode *curr=head;
        while(curr->next){
            int val=curr->next->val;
            if(st.count(val)){
                curr->next=curr->next->next;
            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
};