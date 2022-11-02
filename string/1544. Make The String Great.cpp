class Solution {
public:
    string makeGood(string s) {
        stack<int>st;

        for(int i=0;i<s.length();i++){
            if(!st.empty()){

                if(s[i]-32 == st.top() || s[i] == st.top()-32){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
            else{
                st.push(s[i]);
            }
        }

        string ans = "";

        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;

    }
};

        
    
