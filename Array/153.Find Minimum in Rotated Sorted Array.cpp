class Solution {
public:
    
    int pivots(vector<int> nums){
        int start = 0 ;
        int end = nums.size() - 1 ;
        int mid = start + (end-start)/2;
        
        while(start<end){
            if(nums[mid]>=nums[0]){
                start = mid + 1 ;
            }
            else{
                end = mid ;
            }
            
            mid = start +(end-start)/2 ;
        }
        
        return start;
    }
    
    
int findMin(vector<int>& nums) {
    
        int pivot = pivots(nums);
         cout << pivot ;
        
        if(nums.size()==1 ||  nums[pivot]>nums[pivot-1]){
            return nums[0];
        }
        else {
            return nums[pivot];
        }
    
    }
};