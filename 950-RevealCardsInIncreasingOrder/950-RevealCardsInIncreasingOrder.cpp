// Last updated: 10/12/2026, 7:21:52 PM
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        vector<int>arr;
        deque<int>q;
        for(int i=deck.size()-1;i>=0;i--){
            if(q.empty()){
                q.push_back(deck[i]);
            }
            else if(q.size()==1){
                q.push_front(deck[i]);
            }
            else{
                int ans=q.back();
                q.pop_back();
                q.push_front(ans);
                q.push_front(deck[i]);
            }
        }
        while(!q.empty()){
            arr.push_back(q.front());
            q.pop_front();
        }
        return arr;
    }
};