class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0,count;
        
        for(int i=0;i<sentences.size();i++)
        {
            count=0;
            for(int j=0;j<sentences[i].size();j++)
            {
                if(sentences[i][j]==' ')
                    count++;
                
            }
            if(max<++count)
                max=count;
        }
        return max;
    }
};