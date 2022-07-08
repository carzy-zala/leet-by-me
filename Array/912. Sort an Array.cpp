// we can't apply Bubble Sort or Selection Sort here because they have O(n^2) time complexity and question given do it in O(n) so we can use merge sort or like this

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums;
    }
};