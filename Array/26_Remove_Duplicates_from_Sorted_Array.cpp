class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        vector<int>::iterator ptr1;
        vector<int>::iterator ptr2;
        ptr2=++nums.begin();
        ptr1=nums.begin();
        
       
        while(ptr2!=nums.end())
        {
            
            if(*ptr1==*ptr2)
            {
                nums.erase(ptr2);             
            }
            else
            {
                ptr1++;
                ptr2++;
            } 
        }
        return nums.size();
    }
};