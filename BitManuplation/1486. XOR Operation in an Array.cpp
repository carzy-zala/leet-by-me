class Solution {
public:
    int xorOperation(int n, int start) {
        
        vector<int> temp;
        
        for(int i = 0 ; i<n ;i++){
            int digit = start + 2*i ;
            temp.push_back(digit);
        }
        
        int ans = temp[0];
        
        for(int j =1 ;j<temp.size() ;j++){
            ans= ans^temp[j];
        }
        
        return ans;
    }
};