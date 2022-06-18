class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i=0;
        int j=0;
        while(n1 && n2){
            if(nums1[i]<=nums2[j]){
                ans.push_back(nums1[i]);
                n1--;
                i++;
            }
            else if(nums2[j]<nums1[i]){
                ans.push_back(nums2[j]);
                    n2--;
                    j++;
            }
        }
        while(n1--){
            ans.push_back(nums1[i]);
            i++;
        }
        while(n2--){
            ans.push_back(nums2[j]);
            j++;
        }
        
      double mid;  
      int n=ans.size()/2;
        
    if(ans.size()%2==0){
        mid = (double)(ans[n-1]+ans[n])/2;
    }
    else{
        mid = ans[n];
    }
      return mid;
          
        
    }
};