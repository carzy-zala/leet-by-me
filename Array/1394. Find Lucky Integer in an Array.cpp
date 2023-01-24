class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int cnt;
        int ans = -1;
        int j ;

        for(int i = 0;i<arr.size();){
            cnt = 0;

            for(j=i;j<arr.size() && arr[j] == arr[i];j++){
                cnt++;
            }

            if(cnt == arr[i]){
                ans = arr[i] ;
            }

            i=j;
        }

        return ans;
    }
};