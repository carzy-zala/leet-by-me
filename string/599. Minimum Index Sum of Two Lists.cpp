class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {

        map<int,vector<string>> m;
        for(int i=0;i<list1.size();i++){
            for(int j=0;j<list2.size();j++){
                 if(list1[i]==list2[j]){
                        m[i+j].push_back(list1[i]);
                     }
                 }
            }
        
        

        return m.begin()->second;
    }
};