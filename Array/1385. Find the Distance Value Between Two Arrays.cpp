class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = arr1.size();


        for(int i=0;i<arr1.size();i++){

            for(int j=0;j<arr2.size();j++){
                int a = abs(arr1[i]-arr2[j]);
                if(a<=d){
                    ans=ans-1;
                    break;
                }
            }

        }
        return ans;
    }
};