class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> n;
    
        for(int i=0;i<nums.size();i++){
            n.insert(nums[i]);
        }

        auto it=n.begin();
        if(n.size()<3){
            advance(it,n.size()-1);
            return *it;
        }
        advance(it,n.size()-3);

        
        return *(it);
    }
};