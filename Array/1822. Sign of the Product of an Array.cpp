class Solution {
public:
    int arraySign(vector<int>& nums) {
        double ans = 1;
        for(int i=0;i<nums.size();i++){
            ans = ans*nums[i];
        }
        
        if(ans>0){
            return 1;
        }
        else if(ans<0){
            return -1;
        }
        else{
            return 0;
        }
    }
};