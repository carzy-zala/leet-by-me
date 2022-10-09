class Solution {
public:
    bool reorderedPowerOf2(int n) {

        string str = to_string(n);
        sort(str.begin(),str.end());

      

        for(int i=0;i<30;i++){
            int x = pow(2,i);
            string s = to_string(x);
            sort(s.begin(),s.end());
            if(str==s){
                return true;
            }
        }



        return false;
    }
};