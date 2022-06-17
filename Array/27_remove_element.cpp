class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        if(nums.size()==0)
            return 0;
           vector<int>::iterator ptr;
           for(ptr=nums.begin();ptr<nums.end();)
           {
               if(*ptr==val)
               {
                  ptr = nums.erase(ptr);
               }
               else
               {  
                   k++;
                   ptr++;
               }
           }
        
        return k;
    }
    
};