// Last updated: 8/2/2026, 1:04:38 AM
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
    ListNode* rotateRight(ListNode* head, int k) {
        int n=lenLL(head);
        if(head==NULL||head->next==NULL)return head;
        k=k%n;
        if(k==0)return head;
        ListNode *temp=head;
        while(temp->next)temp=temp->next;
        temp->next=head;
        for(int i=1;i<=n-k;i++){
            temp=temp->next;
        }
        ListNode *newtail=temp;
        ListNode *newhead=temp->next;
        newtail->next=NULL;
        return newhead;
    }
    int lenLL(ListNode *head){
        int l=0;
        while(head){
            l++;
            head=head->next;
        }
        return l;
    }
};