class KthLargest {
public:
    vector<int>kr;
    int kth;
    bool grt=false;
    int ki;
    KthLargest(int k, vector<int>& nums) {
        if(k>nums.size()){grt=true;
         ki=k;
        sort(nums.begin(), nums.end(), greater<int>());
        for(int i=0;i<k-1;i++){
            kr.push_back(nums[i]);
        }
        //kth=nums[k-1];
        
        
        }
        else{
        ki=k;
        sort(nums.begin(), nums.end(), greater<int>());
        for(int i=0;i<k;i++){
            kr.push_back(nums[i]);
        }
        kth=nums[k-1];
        }
    }
    
    int add(int val) {
        if(grt==false){
        if(val<=kth){
            return kth;
        }
        else{
            for (int t=ki-2;t>=0;t--){
                if(kr[t]>=val){
                    kr[t+1]=val;
                }
                else{
                    kr[t+1]=kr[t];
                    if(t==0){
                        kr[t]=val;
                    }
                }

            }
        }
     kth=kr[ki-1];
     return kth; } 
     else{
        grt=false;
        kr.push_back(val);
        for(int p=ki-1;p>0;p--){
            if (kr[p]<=kr[p-1]){
                break;
            }
            else{
                int te;
                te=kr[p-1];
                kr[p-1]=kr[p];
                kr[p]=te;
            }
        }
     } 
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */