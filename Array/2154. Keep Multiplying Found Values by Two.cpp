class Solution {
public:
    bool isNum(int x,vector<int> a){
        for(int i=0;i<a.size();i++){
            if(a[i]==x){
                return true;
            }
        }
        return false;
    }
    
    int findFinalValue(vector<int>& nums, int original) {
         
        while(isNum(original,nums)){
            original=original*2;
        }
        
        return original;
    }
};