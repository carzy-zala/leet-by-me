class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            bool f=false;
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    f=true;
                }
                if(f && nums2[j]>nums1[i]){
                    ans.push_back(nums2[j]);
                    f=false;
                    break;
                }   
            }
            if(f){
                ans.push_back(-1);
            }
        }
        
        return ans;
    }
};