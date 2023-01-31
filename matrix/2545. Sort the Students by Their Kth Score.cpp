class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        for(int i=0;i<score.size()-1;i++){
            for(int j=0;j<score.size()-i-1;j++){
                if(score[j][k] < score[j+1][k]){
                     
                     // storing j+1 row

                     vector<int> temp;

                     for(int x=0;x<score[0].size();x++){
                         temp.push_back(score[j+1][x]);
                     }

                     // storing j into j+1

                     for(int y=0;y<score[0].size();y++){
                         score[j+1][y] = score[j][y];
                     }

                    // setting up j
                    
                     for(int z=0;z<score[0].size();z++){
                         score[j][z] = temp[z];
                     }
                }
            }

        }


        return score;
    }
};