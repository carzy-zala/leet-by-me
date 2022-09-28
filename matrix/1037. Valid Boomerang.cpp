class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        int a = points[0][1]-points[1][1];
        int b = points[1][0]-points[0][0];
        int c = points[0][0]*a + b*points[0][1];



        bool first = points[0][0]*a + b*points[0][1] !=c ? false : true;
        bool second = points[1][0]*a + b*points[1][1] !=c ? false : true;
        bool third = points[2][0]*a + b*points[2][1] !=c ? false : true;


        return first&&second&&third ? false : true;

    }
};