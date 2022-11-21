class MapSum {
       map<string,int> ans;

public:
    MapSum() {
    }
    
    void insert(string key, int val) {
       ans[key] = val ;
    }

    bool checkPrefix(string checkString,string requiredString){
              int s=0;
              int e=requiredString.size()-1;

              while(s<=e){
                   if(checkString[s]!=requiredString[s] || checkString[e]!=requiredString[e]){
                       return false;
                   }
                   s++;
                   e--;
              }
              return true;
    }
    
    int sum(string prefix) {
        int sum=0;
        for(auto it=ans.begin();it!=ans.end();it++){
            if(checkPrefix(it->first,prefix)){
                sum = sum + it->second;
            }
            cout << it->first << " " << sum <<" ";
        }

        return sum;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */