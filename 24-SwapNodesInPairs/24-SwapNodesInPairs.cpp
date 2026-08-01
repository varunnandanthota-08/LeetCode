// Last updated: 8/2/2026, 1:05:32 AM
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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL)return NULL;
        vector<ListNode*>arr;
        ListNode *prev=head,*curr=head;
        while(prev){
            if(prev->next==NULL){
                arr.push_back(prev);
                break;
            }
            curr=prev->next->next;
            prev->next->next=NULL;
            arr.push_back(revLL(prev));
            prev=curr;
        }
        for(int i=0;i<arr.size()-1;i++){
            ListNode *tail=arr[i];
            while(tail->next)tail=tail->next;
            tail->next=arr[i+1];
        }
        return arr[0];
    }
    ListNode* revLL(ListNode *head){
        ListNode *curr=head;
        ListNode *prev=NULL;
        while(curr){
            ListNode *next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
};