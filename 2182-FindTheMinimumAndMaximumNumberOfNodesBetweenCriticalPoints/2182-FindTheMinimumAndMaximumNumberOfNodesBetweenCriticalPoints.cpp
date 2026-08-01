// Last updated: 8/2/2026, 12:57:49 AM
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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head->next->next==NULL)return {-1,-1};
        vector<int>ans;
        ListNode* curr=head->next;
        ListNode* prev=head,*next=NULL;
        int d=0;
        while(curr->next){
            d++;
            next=curr->next;
            if((curr->val>prev->val&&curr->val>next->val)||(curr->val<prev->val&&curr->val<next->val)){
                ans.push_back(d);
            }
            prev=curr;
            curr=next;
        }
        if(ans.size()<2)return {-1,-1};
        int minv=INT_MAX,maxv=INT_MIN;
        for(int i=1;i<ans.size();i++){
            minv=min(minv,ans[i]-ans[i-1]);
        }
        maxv=max(maxv,ans[ans.size()-1]-ans[0]);
        return {minv,maxv};
    }
};