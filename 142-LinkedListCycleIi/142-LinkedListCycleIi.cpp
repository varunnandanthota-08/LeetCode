// Last updated: 8/2/2026, 1:03:44 AM
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
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int>mp;
        ListNode *temp=head;
        while(temp!=NULL){
            if(mp.contains(temp)){
                return temp;
            }
            mp[temp]=temp->val;
            temp=temp->next;
        }
        return NULL;
    }
};