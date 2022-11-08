class Solution {
    string revers(string a){
        int s=0;
        int e=a.size()-1;

        while(s<e){
            char temp=a[s];
            a[s]=a[e];
            a[e]=temp;
            s++;
            e--;
        }

        return a;
    }

public:
    string convertToTitle(int columnNumber) {
        string s;

       while(columnNumber>26){
           int reminder=columnNumber%26;
           if(reminder==0){
               reminder=26;
               columnNumber--;
           }

           char st = 'A' + reminder-1;
           s=s+st;

           columnNumber=columnNumber/26;
       }
      cout<<columnNumber;
      if(columnNumber<=26 && columnNumber>=1){
            char st = 'A' + columnNumber-1;
            s= s+st;
        }

        
        return revers(s);
    }
};