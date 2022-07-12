class Solution {
public:
    int bitwiseComplement(int n) {
        vector<int> ans;
        int p;
        if(!n)
            return 1;
        while(n>0)
        {
            p=n%2;
            n=n/2;
            ans.push_back(p);
        }
        int num=0;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]==0)       
               num=num+(pow(2,i));
        }
        return num;
    }
};