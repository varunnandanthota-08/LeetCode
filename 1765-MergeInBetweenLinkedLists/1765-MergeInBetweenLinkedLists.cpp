// Last updated: 8/2/2026, 12:59:02 AM
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *t1=list1,*t2=list1;
        while(--a){
            t1=t1->next;
        }
        for(int j=1;j<=(b+1);j++){
            t2=t2->next;
        }
        t1->next=list2;
        while(list2->next){
            list2=list2->next;
        }
        list2->next=t2;
        return list1;
    }
};