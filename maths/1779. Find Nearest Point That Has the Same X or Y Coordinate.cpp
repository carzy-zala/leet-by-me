class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int index = -1;
        int sd = INT_MAX;
        for (int i = 0; i < points.size(); i++)
        {

            if (points[i][0] == x || points[i][1] == y)
            {
                if (points[i][0] == x)
                {
                      if(sd>abs(y-points[i][1])){
                        sd = abs(y - points[i][1]);
                        index = i;
                            }
                }

                else
                {
                    if (sd > abs(x - points[i][0]))
                    {
                        sd = abs(x - points[i][0]);
                        index = i;
                    }
                }
            }
        }

        return index;}
    };