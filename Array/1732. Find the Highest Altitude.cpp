class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int sum = 0;
        for(int i=0;i<gain.size();i++){
            sum = sum + gain[i];
            gain[i] = sum;
        }
        int minn = 0;

        for(int j=0;j<gain.size();j++){
            minn = max(minn,gain[j]);
        }
        return minn;
    }
};