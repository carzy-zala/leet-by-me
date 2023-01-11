class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>answer;
        
        for(auto less : nums){
            if(less<pivot){
                answer.push_back(less);
            }
        }
        
        for(auto equal : nums){
            if(equal==pivot){
                answer.push_back(equal);
            }
        }
        
        for(auto high : nums){
            if(high>pivot){
                answer.push_back(high);
            }
        }
        return answer;
    }
};