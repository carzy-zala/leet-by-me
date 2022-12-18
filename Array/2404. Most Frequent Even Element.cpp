#include <bits/stdc++.h>
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> mp;
        for(auto n: nums){
             mp[n]++;
        }
        int answer = -1, maxu = -1;
        for(auto element: mp){
            if(element.first%2 == 0 && element.second > maxu){
                maxu = element.second;
                answer = element.first;
            }
        }
        return answer;

    }
};