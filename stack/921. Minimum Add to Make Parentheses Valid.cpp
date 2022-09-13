class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0;
        stack<char> st;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else{  // that means there is ')'
                if(!st.empty()){
                    st.pop();
                }
                else{ // that means stack is empty
                    count++;
                }
            }
        }

        // if there is some element in stack

        if(st.empty()){
            return count;
        }
        else{
            while(!st.empty()){
                count++;
                st.pop();
            }
        }
        return count;
    }
};