// Last updated: 8/2/2026, 12:57:59 AM
class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int l=nums.size();
        vector<string>binary=func(l);
        sort(nums.begin(),nums.end());
        for(int i=0;i<binary.size();i++){
            string s=binary[i];
            int lt=0;
            int rt=nums.size()-1;
            bool flag=false;
            while(lt<=rt){
                int mid=(lt+(rt-lt)/2);
                if(nums[mid]==s){
                    flag=true;
                    break;
                }
                else if(s<nums[mid]){
                    rt=mid-1;
                }
                else{
                    lt=mid+1;
                }
            }
            if(!flag){
                return s;
            }
        }
        return "";
    }
    vector<string> func(int n){
        vector<string>arr;
        int total=(1<<n);
        for(int i=0;i<total;i++){
            arr.push_back(bin(i,n));
        }
        return arr;
    }
    string bin(int n,int l){
        string s="";
        while(n>0){
            s+=(n%2)+'0';
            n/=2;
        }
        while(s.size()<l){
            s+='0';
        }
        reverse(s.begin(),s.end());
        return s;
    }
};