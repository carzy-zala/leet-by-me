class Solution {
    vector<int> ans;
public:
    Solution(vector<int>& nums) {
        ans=nums;
    }
    
    vector<int> reset() {
        return ans;
    }
    
    vector<int> shuffle() {
       vector<int> shuffled = ans;
			
			int leftSize = ans.size();
			for(int i = ans.size()-1; i>=0; i--) {
				int j = rand()%leftSize;
				swap(shuffled[i], shuffled[j]);
				leftSize--;
			}
			return shuffled;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */