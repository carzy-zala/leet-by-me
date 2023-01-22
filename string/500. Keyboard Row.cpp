class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string firstRow = "qwertyuiop";
        string secondRow = "asdfghjkl";
        string thirdRow = "zxcvbnm";

        set<int>st;
        vector<string>answer;

        for(auto word : words){
            st.clear();
            for(auto item : word){

                char character = tolower(item);

                if(firstRow.find(character)!=-1){
                    st.insert(1);
                }
                else if(secondRow.find(character)!=-1){
                    st.insert(2);
                }
                else if(thirdRow.find(character)!=-1){
                    st.insert(3);
                }

            }

            if(st.size()==1){
                answer.push_back(word);
            }
        }

        return answer;
    }
};