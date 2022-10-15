class Solution {
public:
    bool detectCapitalUse(string word) {
        
        bool allCap=false;
        bool allSmal=false;
        
        if(word[0]>='A' && word[0]<='Z'){
                if(word[1]<='z' && word[1]>='a'){
                    for(int i=2;i<word.size();i++){
                        if(word[i]>='A' && word[i]<='Z'){
                            return false;
                        }
                    }
                }
                else{
                    for(int i=2;i<word.size();i++){
                        if(word[i]<='z' && word[i]>='a'){
                            return false;
                        }
                    }
                }           
           }
        else{
            for(int i=1;i<word.size();i++){
                if(word[i]>='A' && word[i]<='Z'){
                 return false;
                }
            }
        }
        
        return true;
    }
};