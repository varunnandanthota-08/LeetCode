// Last updated: 8/2/2026, 12:54:34 AM
class RideSharingSystem {
public:
    queue<int>q1;
    queue<int>q2;
    RideSharingSystem() {
        
    }
    
    void addRider(int riderId) {
        q1.push(riderId);
    }
    
    void addDriver(int driverId) {
        q2.push(driverId);
    }
    
    vector<int> matchDriverWithRider() {
        if((!q1.empty())&&(!q2.empty())){
            int driver=q2.front();
            int rider=q1.front();
            q1.pop();
            q2.pop();
            return {driver,rider};
        }
        else{
            return {-1,-1};
        }
    }
    
    void cancelRider(int riderId) {
        queue<int>temp;
        bool flag=false;
        while(!q1.empty()){
            int ans=q1.front();
            q1.pop();
            if(ans==riderId&&(!flag)){
                flag=true;
            }
            else{
                temp.push(ans);
            }
        }
        q1=temp;
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */