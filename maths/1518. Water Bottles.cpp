class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count=0;
        while(numBottles>=numExchange){
              count=count+((numBottles/numExchange)*numExchange);
              numBottles=(numBottles%numExchange) + (numBottles/numExchange);
        }
        if(numBottles){
            count=count+numBottles;
        }
        return count;
    }
};