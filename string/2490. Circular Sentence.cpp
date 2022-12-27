class Solution {
public:
    bool isCircularSentence(string sentence) {

         // check for last and first character
         if(sentence[0]!=sentence[sentence.size()-1]){
             return false;
         }
         // getting words
        for(int i=0;i<sentence.size();i++){
             if(sentence[i]==' '){
                 if(sentence[i-1]!=sentence[i+1]){
                     return false;
                 }
             }
        }

         
        return true;
    }
};