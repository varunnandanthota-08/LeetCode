// Last updated: 8/2/2026, 12:56:24 AM
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
    int GCD(int a,int b){
        while(b!=0){
            int r=a%b;
            a=b;
            b=r;
        }
        return a;
    }
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp=head;
        while(temp!=NULL&&temp->next!=NULL){
            int gcd=GCD(temp->val,temp->next->val);
            ListNode* newnode=new ListNode(gcd);
            newnode->next=temp->next;
            temp->next=newnode;
            temp=newnode->next;
        }
        return head;
    }
};