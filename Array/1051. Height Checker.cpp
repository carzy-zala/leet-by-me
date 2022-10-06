class Solution {

public:

    int heightChecker(vector<int>& heights) {

        int count = 0;

        vector<int>newHeights;

        for(auto it:heights){

            newHeights.push_back(it);

        }

        sort(newHeights.begin(),newHeights.end());

        for(int i=0;i<heights.size();i++){

            if(heights[i]!=newHeights[i]){

                count++;

            }

        }

        return count;

    }

};