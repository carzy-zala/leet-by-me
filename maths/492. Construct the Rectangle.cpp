class Solution {
public:
    vector<int> constructRectangle(int area) {
        int ans = area - 1 ;
        int length = area ;
        int width = 1 ;

        int end = area -  1 ;
        while(end>1){
            if(area%end==0){
                int val = area / end;
                if(val > end){
                    break;
                }
                int temp = end - val;
                if(temp<ans){
                    length = end;
                    width = val;
                    ans = temp;
                }
            }
            end --;
        }

        vector<int> finalAns = {length,width};

        return finalAns;
    }
};