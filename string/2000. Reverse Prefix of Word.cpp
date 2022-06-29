class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        int occur=0;
        
        for(int i=0;i<word.length();i++)
        {
            if(word[i]==ch)
            {
                occur=i;
                break;
            }
        }
        
        int start=0;
        int end=occur;
        char temp;
        
        while(start<end)
        {
            temp=word[start];
            word[start]=word[end];
            word[end]=temp;
            start++;
            end--;
        }
        
        return word;
        
    }
};