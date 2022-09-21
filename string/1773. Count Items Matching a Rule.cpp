class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;

        string type = "type";
        string color = "color";
        string name = "name";

        int num;

        if(ruleKey==type){
            num = 1;
        }
        else if(ruleKey == color){
            num = 2;
        }
        else if(ruleKey== name){
            num = 3;
        }

        switch(num){
            case 1:
                for(int i=0;i<items.size();i++){
                    if(items[i][0]==ruleValue){
                    count++;
                    }
                }
                break;
            case 2:
                for(int i=0;i<items.size();i++){
                    if(items[i][1]==ruleValue){
                    count++;
                    }
                }
                break;
            case 3:
                for(int i=0;i<items.size();i++){
                    if(items[i][2]==ruleValue){
                    count++;
                    }
                }
                break;

        }

    return count;

    }
};