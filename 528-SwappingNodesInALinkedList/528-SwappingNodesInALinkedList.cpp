// Last updated: 8/2/2026, 1:01:48 AM
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
    ListNode* swapNodes(ListNode* head, int k) {
        int l=lenLL(head);
        k=min(k,l-k+1);
        ListNode *curr=head;
        int val1=0,val2=0;
        int cnt=0;
        while(curr){
            cnt++;
            if(cnt==k)val1=curr->val;
            if(cnt==(l-k+1)){
                val2=curr->val;
                break;
            }
            curr=curr->next;
        }
        ListNode *temp=head;
        cnt=0;
        while(temp){
            cnt++;
            if(cnt==k)temp->val=val2;
            if(cnt==(l-k+1)){
                temp->val=val1;
                break;
            }
            temp=temp->next;
        }
        return head;
    }
    int lenLL(ListNode* head){
        int l=0;
        while(head){
            head=head->next;
            l++;
        }
        return l;
    }
};