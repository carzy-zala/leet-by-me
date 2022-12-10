class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        vector<int> :: iterator it;
        
        bool f=false;
        for(it=nums.begin();it!=nums.end()-1;){
            int i=*it;
            int j=*(it+1);

            if(f==false && i==j){
                f=true;
                it++;
            }
            else{
                if(i!=j){
                    f=false;
                    it++;
                }
                else{
                    nums.erase(it);
                }
            }
        }

        return nums.size();

    }
};