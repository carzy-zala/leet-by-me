// First Approach

class Solution {
public:
    int countElements(vector<int>& nums) {
        
        int count=0;
        bool s,b;
        
        for(int i=0;i<nums.size();i++){
            s=false,b=false;
            
            for(int j=0;j<nums.size();j++){
                if(nums[i]<nums[j]){
                    s=true;
                }
                if(nums[i]>nums[j]){
                    b=true;
                }
            }
            
            if(s && b){
                count++;
            }
        }
        
        return count;
    }
};


// Second Approach

class Solution {
public:
    int countElements(vector<int>& nums) {

        int maxu = *max_element(nums.begin(), nums.end()); 
        int minu = *min_element(nums.begin(), nums.end()); 
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > minu && nums[i] < maxu){
                count++;
            }
        }

        return count;
    }
};