class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int len = candyType.size()/2;

        set<int>st;

        for(auto a:candyType){
            st.insert(a);
        }

        if(len<st.size()){
            return len;
        }

        return st.size();
    }
};