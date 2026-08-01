// Last updated: 8/2/2026, 1:03:32 AM
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int a=len(headA);
        int b=len(headB);
        int diff=abs(a-b);
        if(a>=b){
            while(diff--){
                headA=headA->next;
            }
        }
        else
        {
            while(diff--){
                headB=headB->next;
            }
        }
        while(headA&&headB){
            if(headA==headB)return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
    int len(ListNode *head){
        int l=0;
        ListNode *curr=head;
        while(head){
            l++;
            head=head->next;
        }
        return l;
    }
};