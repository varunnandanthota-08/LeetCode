// Last updated: 10/27/2026, 8:41:38 PM
class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<tuple<int,int,int>>temp;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int curr=0;
            while(num>0){
                curr+=num%10;
                num/=10;
            }
            temp.push_back({curr,nums[i],i});
        }
        sort(temp.begin(),temp.end());
        int ans=0;
        vector<bool>vis(n,false);
        vector<int>correctIndex(n);
        for(int i=0;i<temp.size();i++){
            correctIndex[get<2>(temp[i])]=i;
        }
        for(int i=0;i<temp.size();i++){
            if(vis[i])continue;
            int j=i;
            int size=0;
            while(!vis[j]){
                vis[j]=true;
                size++;
                j=correctIndex[j];
            }
            ans+=size-1;
        }
        return ans;
    }
};
