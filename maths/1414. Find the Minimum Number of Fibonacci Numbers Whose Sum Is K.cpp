class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        int firstTerm = 1;
        int secondTerm =  1;
        vector<int> ans;
        ans.push_back(firstTerm);
        ans.push_back(secondTerm);
        int val=0;

        while(val<k){
             val = firstTerm + secondTerm ;
             ans.push_back(val);
             firstTerm = secondTerm;
             secondTerm = val;
        }

        int finalAns = 0;
        int cnt=0;

        for(int i=ans.size()-1;i>=0;i--){
            if(finalAns + ans[i] <=k){
                finalAns += ans[i];
                cnt++;
            }
            if(finalAns == k){
                return cnt;
            }
        }

        return -1;

    }
};