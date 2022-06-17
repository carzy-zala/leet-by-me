class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        vector<int>::iterator ptr;
        int k=-1;
        for(ptr=nums.begin();ptr<nums.end();ptr++)
        {
            k++;
           if(*ptr==target || target<*ptr)
               return k;
        }
        return (k+1);
    }
};