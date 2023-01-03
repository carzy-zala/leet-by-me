class Solution {
public:
    bool canChange(string start, string target) {
        int i=0;
        int j=0;
        while(i<start.size() && j<target.size()){
            while(start[i]=='_'){
                i++;
            }
            while(target[j]=='_'){
                j++;
            }
            if(target[j]==start[i]){
                if(target[j]=='R' && j<i){
                    return false;
                }
                if(target[j]=='L' && j>i){
                    return false;
                }
                i++;
                j++;

            }
            else{
                
                return false;
            }
        }

        if(j<target.size()){
            while(target[j]=='_'){
                j++;
            }
            if(j<target.size()){
                return false;
            }
        }
         if(i<start.size()){
            while(start[i]=='_'){
                i++;
            }
            if(i<start.size()){
                return false;
            }
        }

        return true;
    }
};