// Last updated: 8/2/2026, 1:03:43 AM
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
    void reorderList(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *h1=head;
        ListNode *h2=slow->next;
        slow->next=NULL;
        h2=revLL(h2);
        ListNode *t2=h2;
        while(h1&&h2){
            ListNode *t1=h1->next;
            ListNode *t2=h2->next;
            h1->next=h2;
            h2->next=t1;
            h1=t1;
            h2=t2;
        }
    }
    ListNode* revLL(ListNode* head){
        ListNode *prev=NULL;
        ListNode *curr=head;
        ListNode *next=NULL;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
};