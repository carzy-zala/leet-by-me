class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        
        while(num){
            switch(num%2){
                case 0 : count++;
                         num = num/2;
                         break;
                case 1 : count++;
                         num = num-1;
                         break;
            }
        }
        
        return count;
    }
};