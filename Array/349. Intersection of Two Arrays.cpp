class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int i = 0;
        int j = 0;
        set<int> s;

        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums2[j]<nums1[i]){
                j++;
            }
            else{ // if you wish then you can push nums2[j]
                s.insert(nums1[i]);
                i++;
                j++;
            }
        }
        vector<int> ans;
        for(set<int>::iterator it = s.begin(); it != s.end(); it++) {
           ans.push_back(*it);
        }

        return ans;
    }
};