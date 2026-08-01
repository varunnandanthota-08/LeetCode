// Last updated: 8/2/2026, 12:57:23 AM
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
    ListNode* mergeNodes(ListNode* head) {
        head=head->next;
        ListNode *temp=head;
        int curr=temp->val;
        while(temp&&temp->next){
            if(temp->next->val==0){
                temp->val=curr;
                temp=temp->next;
                curr=0;
            }
            else{
                curr+=(temp->next->val);
                temp->next=temp->next->next;
            }
        }
        temp=head;
        while(temp->next&&temp->next->next){
            temp=temp->next;
        }
        temp->next=NULL;
        return head;
    }
};