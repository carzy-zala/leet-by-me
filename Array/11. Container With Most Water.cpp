class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0;
        int e=height.size()-1;
        int area=0;

        while(s<e){
            int h=min(height[s],height[e]);
            area = max(area,(e-s)*h);
            while(height[s]<=h && s<e) s++;
            while(height[e]<=h && s<e) e--;
        }

        return area;
    }
};