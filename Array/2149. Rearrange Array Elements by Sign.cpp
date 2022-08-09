class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        vector<int> posi;
        vector<int> nege;

        for(auto &i:nums)
		{
			if(i>0)
				posi.push_back(i);
			else
				nege.push_back(i);
		}
        int k=0;
        int l=0;
        for(int j=0;j<nums.size();j++){
            if(j%2==0){
                ans[j] = posi[k];
                k++;
            }
            else{
                ans[j]=nege[l];
                l++;
            }
        }
        return ans;
    }
}; 