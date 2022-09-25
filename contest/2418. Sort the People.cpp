class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        vector<string> ans;
        vector<pair<int, string>> person;
        int size = names.size();
        for (int i = 0; i < names.size(); i++)
        {
            person.push_back(make_pair(heights[i], names[i]));
        }

        sort(person.begin(), person.end());

        for (int i = names.size() - 1; i >= 0; i--)
        {
            ans.push_back(person[i].second);
        }
        return ans;
    }
};