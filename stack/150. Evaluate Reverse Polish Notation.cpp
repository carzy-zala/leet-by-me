class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                int first = st.top();
                st.pop();
                int second = st.top();
                st.pop();
                if(tokens[i]=="+"){
                    st.push(first+second);
                }
                else if(tokens[i]=="-"){
                    st.push(second-first);
                }
                else if(tokens[i]=="*"){
                    st.push(second*first);
                }
                else if(tokens[i]=="/"){
                    st.push(second/first);
                }

            }
            else{
                st.push(stoi(tokens[i]));
            }   
        }
    return st.top();
    }
};