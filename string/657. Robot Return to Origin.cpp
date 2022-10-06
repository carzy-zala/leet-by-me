class Solution {
public:
    bool judgeCircle(string moves) {

        pair<int,int>position;
        position=make_pair(0,0);

        for(int i=0;i<moves.length();i++){
            if(moves[i]=='U'){
                position.second+=1;
            }
            else if(moves[i]=='D'){
                position.second-=1;
            }
            else if(moves[i]=='L'){
                position.first-=1;
            }
            else if(moves[i]=='R'){
                position.first+=1;
            }
        }

        if(position.first==0 && position.second==0){
            return true;
        }
        return false;
    }
};