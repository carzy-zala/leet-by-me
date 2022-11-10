class Solution {
    // converting to integer
    int toInt(char a){
        switch(a){
            case '1': return 1;
            case '2': return 2;
            case '3': return 3;
            case '4': return 4;
            case '5': return 5;
            case '6': return 6;
            case '7': return 7;
            case '8': return 8;
            case '9': return 9;
        }

        return 0;
    }

    // convert to character
    char toChar(int b){
        switch(b){
            case 1: return '1';
            case 2: return '2';
            case 3: return '3';
            case 4: return '4';
            case 5: return '5';
            case 6: return '6';
            case 7: return '7';
            case 8: return '8';
            case 9: return '9';
        }

        return '0';
    }

   // reversing the string
   string reverse(string s){
       int start=0;
       int end=s.size()-1;

       while(start<end){
           swap(s[start++],s[end--]);
       }
       return s;
   }

public:
    string addStrings(string num1, string num2) {
        string ans="";

        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;

        // while both the string value present
        while(i>=0 && j>=0){
            int val=toInt(num1[i]) + toInt(num2[j])+carry;
            carry=val/10;
            ans=ans+toChar(val%10);
            i--;
            j--;
        }

        // while i present
        while(i>=0){
            int val = carry + toInt(num1[i]);
            carry=val/10;
            ans=ans+toChar(val%10);
            i--;
        }

           // while j present
        while(j>=0){
            int val = carry + toInt(num2[j]);
            carry=val/10;
            ans=ans+toChar(val%10);
            j--;
        }

        // when carry is there
        while(carry!=0){
            ans = ans + toChar(carry%10);
            carry=carry/10;
        }

        return reverse(ans);
    }
};