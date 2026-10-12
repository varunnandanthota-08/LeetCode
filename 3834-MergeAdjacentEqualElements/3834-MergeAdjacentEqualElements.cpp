// Last updated: 10/12/2026, 7:11:13 PM
class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        stack<long long>st;
        vector<long long>v;
        long long n=nums.size();
        for(long long i=0;i<n;i++){
            if(!st.empty()&&st.top()==nums[i]){
                
                    long long ans=st.top();
                    st.pop();
                    long long val=ans+nums[i];
                    while(!st.empty()&&val==st.top()){
                        long long ans1=st.top();
                        st.pop();
                         val=val+ans1;
                    }
                    st.push(val);
                
            }
            else{
                st.push(nums[i]);
            }
        }
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        long long l=0;
        long long r=v.size()-1;
        while(l<=r){
            swap(v[l],v[r]);
            l++;
            r--;
        }
        return v;
    }
};