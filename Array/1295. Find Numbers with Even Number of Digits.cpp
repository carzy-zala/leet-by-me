class Solution {
public:
    bool isEvenDigit(int x){
      int count = 0;
      while(x){
         count++;
         x = x/10;
      }    
      
    if(count%2==0){
        return true;
    }
      return false;
}
    
int findNumbers(vector<int>& nums) {
        
        int ans = 0 ;
        
        for(int i=0;i<nums.size();i++){
            if(isEvenDigit(nums[i])){
                ans++;
            }
        }
    
      return ans;
    }
};