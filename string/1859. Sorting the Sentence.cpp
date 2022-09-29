class Solution {
public:
    string sortSentence(string s) {
        int i = 0;
        vector<pair<int,string>>ans;

        while(i<s.length()){
            string str = "";
            while(s[i]!=' ' && i<s.length()){
                str = str + s[i];
                i++;
            }
            char n = str.back();
            int num = n - '0';
            str.pop_back();
            ans.push_back(make_pair(num,str));
            i++;
        }

        sort(ans.begin(),ans.end());

        string answer = "";

        for(int i=0;i<ans.size()-1;i++){
            answer = answer + ans[i].second + ' ';
        }

        return answer + ans[ans.size()-1].second;
    }
};