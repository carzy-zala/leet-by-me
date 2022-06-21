class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        bool f;
        int j,digit;
        for(int i=left;i<=right;i++)
        { 
            j=i;
            f=true;
            while(j)
            {
                digit=j%10;
                if(digit==0 || i%digit!=0 )
                {
                    f=false;
                    break;
                }
                j=j/10;
            }
            if(f)
                ans.push_back(i);
        }
        
        return ans;
    }
};