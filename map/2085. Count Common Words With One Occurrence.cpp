class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int> word1;
        map<string,int> word2;
        int c=0;

        for(int i=0;i<words1.size();i++){
            auto it=word1.find(words1[i]);

            if(it!=word1.end()){
                it->second ++;
            }
            else{
                word1[words1[i]]=1;
            }
        }

        for(int i=0;i<words2.size();i++){
            auto it=word2.find(words2[i]);

            if(it!=word2.end()){
                it->second ++;
            }
            else{
                word2[words2[i]]=1;
            }
        }
      
        int i=0;
        auto itr=word1.begin();
        while(itr!=word1.end()){
            auto it=word2.find(itr->first);

            if(it!=word2.end()){
   
                if(it->second==1 && itr->second==1){
                    c++;
                }
            }

            itr++;
            i++;
        }

        return c;
    }
};