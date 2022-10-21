class Solution {
    private :
    
     bool checkEqual(int a[26],int b[26]){
         
         for(int i=0;i<26;i++){
             if(a[i]!=b[i]){
                 return false;
             }
         }
         
         return true;
     }
    
    
public:
    bool checkInclusion(string s1, string s2) {
        
        if(s1.size()>s2.size()){
            return false;
        }
        //counting alphabate in s1
        int alpha[26]={0};
        
        for(int i=0;i<s1.size();i++){
            int val=s1[i]-'a';
            alpha[val]++;
        }
        
        //traversing s2 string in window of size s1 length and compare
        
        //for first window
        int i=0;
        int windowsize=s1.length();
        int count[26]={0};
        
        while(i<windowsize ){
            int index= s2[i]-'a';
            count[index]++;
            i++;
        }
        
        if(checkEqual(alpha,count)){
            return true;
        }
        
        //for further windows
        
        while(i<s2.size()){
            char newChar=s2[i];
            int index=newChar-'a';
            count[index]++;
            
            char oldChar=s2[i-windowsize];
            index=oldChar-'a';
            count[index]--;
            
            if(checkEqual(alpha,count))
            {
                return true;
            }
            i++;
        }
        
        
        
        return false;
    }
};