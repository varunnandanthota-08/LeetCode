// Last updated: 8/2/2026, 1:03:15 AM
class Solution {
public:
    int countPrimes(int n) {
        if(n<=1)
        {
            return 0;
        }
        int c=0;
        vector<bool>primes(n,true);
        primes[0]=false;
        primes[1]=false;
        for(int i=2;i*i<n;i++)
        {
            if(primes[i])
            {
                for(int j=i*i;j<n;j+=i)
                {
                    primes[j]=false;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(primes[i])
            {
                c+=1;
            }
        }
        return c;
    }
};