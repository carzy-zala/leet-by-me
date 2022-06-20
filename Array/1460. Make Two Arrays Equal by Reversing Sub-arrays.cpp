class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        int i=target.size()-1;
        int j=arr.size()-1;
        
        while(i>=0 && j>=0)
        {
            if(target[i]!=arr[j])
                return false;
            i--;
            j--;
        }
        
        
    
        return true;
            
        
    }
};