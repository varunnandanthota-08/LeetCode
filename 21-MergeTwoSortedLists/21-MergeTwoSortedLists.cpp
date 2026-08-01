// Last updated: 8/2/2026, 1:05:35 AM
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)return list2;
        if(list2==NULL)return list1;
        bool head=true;
        ListNode *sort=NULL;
        ListNode *curr1=list1;
        ListNode *curr2=list2;
        if(list1->val<=list2->val){
            sort=list1;
            curr1=curr1->next;
        }
        else{
            sort=list2;
            curr2=curr2->next;
            head=false;
        }
        while(curr1!=NULL&&curr2!=NULL){
            int val1=curr1->val;
            int val2=curr2->val;
            if(val1<=val2){
                sort->next=curr1;
                curr1=curr1->next;
            }
            else{
                sort->next=curr2;
                curr2=curr2->next;
            }
            sort=sort->next;
        }
        if(curr1!=NULL)sort->next=curr1;
        if(curr2!=NULL)sort->next=curr2;
        return head?list1:list2;
    }
};