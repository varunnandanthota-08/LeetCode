// Last updated: 8/2/2026, 12:59:55 AM
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
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        int size=0;
        while(temp!=NULL){
            size+=1;
            temp=temp->next;
        }
        ListNode* temp1=head;
        int sum=0;
        int k=0;
        while(temp1!=NULL){
            int num=1<<(size-k-1);
            if(temp1->val==1){
                sum+=num;
            }
            k+=1;
            temp1=temp1->next;
        }
        return sum;
    }
};