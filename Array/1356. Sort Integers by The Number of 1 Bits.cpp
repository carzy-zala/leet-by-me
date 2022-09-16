class Solution
{
public:
    static bool cmp(int &a, int &b)
    {
        int countA = __builtin_popcount(a), countB = __builtin_popcount(b);
        if (countA == countB)
            return a < b;
        return countA < countB;
    }
    vector<int> sortByBits(vector<int> &arr)
    {
        sort(arr.begin(), arr.end(), cmp);
        return arr;
    }
};