 class Solution {
public:
    bool isThree(int n) {
        int c=2;
        for(int i=2;i<n;i++){
            if(n%i==0){
                c++;
            }
        }
        if(c==3){
            return true;
        }
        else{
        return false;
     }
    }
};