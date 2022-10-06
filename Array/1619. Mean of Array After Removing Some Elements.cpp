class Solution {
public:
   
        



    double trimMean(vector<int>& arr) {

        double sum = 0.0;

        sort(arr.begin(),arr.end());

        int ans = (arr.size()*5)/100;

        int num = arr.size() - (ans*2); 

        for(int i=ans;i<arr.size()-ans;i++){

            sum = sum + arr[i];

        }

        return sum/num;

    }

};