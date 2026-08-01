// Last updated: 8/2/2026, 12:57:39 AM
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
    int pairSum(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode *prev=NULL;
        while(slow){
            ListNode *next=slow->next;
            slow->next=prev;
            prev=slow;
            slow=next;
        }
        int ans=0,maxv=INT_MIN;
        ListNode *f=head;
        ListNode *s=prev;
        while(s){
            ans=f->val+s->val;
            maxv=max(maxv,ans);
            f=f->next;
            s=s->next;
        }
        return maxv;
    }
};