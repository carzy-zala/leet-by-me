class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        
        int s=0;
        int e=numbers.size()-1;
     
        
       while (s < e) {
            if (numbers[s] + numbers[e] < target) ++s;
            else if (numbers[s] + numbers[e] > target) --e;
            else {
                ans.push_back(s+1);
                ans.push_back(e+1);
                break;
            }
        }
        
        return ans;
    }
};