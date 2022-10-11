class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        vector<int> ans;
        vector<int> :: iterator itr;
        int c=0;
        int i=digits.size()-1;
        int digit=((digits[i]+c+1)%10);
        ans.push_back(digit);
        c=(digits[i]+c+1)/10;
        i--;
        itr=ans.begin();
        
        while(i>=0)
        {
            
            digit=((digits[i]+c)%10);
            c=(digits[i]+c)/10;
            ans.insert(itr,digit);
            itr=ans.begin();
            i--;
        }
        
        if(c)
        {
            ans.insert(itr,c);
        }
        
        return ans;
    }
};