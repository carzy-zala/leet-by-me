class Solution {
public:
    int countOperations(int num1, int num2) {
        int count=0;
        
        while(num1 && num2){
            if(num1<=num2){
                 count++;
                num2=num2-num1;
            }
            else
            {
                count++;
                num1=num1-num2;
            }
        }
        
        return count;
    }
};