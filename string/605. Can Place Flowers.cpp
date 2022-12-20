class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int count=0;


        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==1){
                i++;
            }
            else {
                if(i+1==flowerbed.size() || flowerbed[i+1]==0){
                    count++;
                    i++;
                }
            }
        }

        return count>=n;
    }
};