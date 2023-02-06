class Solution {
public:
    int distinctIntegers(int n) {
    //     if(n==1){
    //         return 1;
    //     }
    //    return n-1; 

    // second approach
     set<int> st;
        st.insert(n);
        
        for(int i=0; i<100; i++) {
            for(auto k : st) {
                for(int i=2; i<=k; i++) {
                    if(k % i == 1) {
                        st.insert(i);
                    }
                }
            }
        }
        return st.size();
    }
};