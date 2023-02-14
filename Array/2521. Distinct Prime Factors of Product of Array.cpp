class Solution {
public:

    int distinctPrimeFactors(vector<int>& nums) {
        set<int> ans;

        for(int i=0;i<nums.size();i++){
            int a=nums[i];

             while(a%2==0){
             ans.insert(2);
             a=a/2;
            }

            for(int i=3;i<=sqrt(a);i=i+2){
                while(a%i ==0){
                 ans.insert(i);
                 a=a/i;
             }
            }

            if(a>2){
              ans.insert(a);
            }
        }

        for(auto i:ans){
            cout << i <<" ";
        }

        return ans.size();
    }
};