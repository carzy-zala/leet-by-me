class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=-1;
        vector<bool> ans;
        
        for(int i=0;i<candies.size();i++){
           if(max<candies[i]){
               max=candies[i];
           }
        }
        
        for(int j=0;j<candies.size();j++){
            if(candies[j]+extraCandies>=max){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        
        
        return ans;
    }
};