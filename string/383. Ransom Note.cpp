class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());

        int j = 0;
        for(int i=0;i<magazine.length();i++){

            if(magazine[i]==ransomNote[j] && j<ransomNote.length()){
                j++;
            }

        }

        if(j>=ransomNote.length()){
            return true;
        }
        else{
            return false;
        }

    }
};