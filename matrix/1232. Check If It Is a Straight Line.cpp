class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {

        int a = coordinates[0][1]-coordinates[1][1];
        int b = coordinates[1][0]-coordinates[0][0];

        int c = coordinates[0][0]*a + b*coordinates[0][1];

        for(int i=2;i<coordinates.size();i++){
            if(coordinates[i][0]*a + b*coordinates[i][1] !=c){
                return false;
            }
        }
        return true;
    }
};


// simply just use AX=BY=C formula