class Solution

{

public:

    vector<vector<int>> minimumAbsDifference(vector<int> &arr)

    {

        vector<vector<int>> ans;

        sort(arr.begin(), arr.end());

        int minu = INT_MAX;

        for (int i = 1; i < arr.size(); i++)

        {

            minu = min(minu, abs(arr[i] - arr[i - 1]));

        }

        for (int i = 1; i < arr.size(); i++)

        {

            vector<int> a;

            if (arr[i] - arr[i - 1] == minu)

            {

                a.push_back(arr[i - 1]);

                a.push_back(arr[i]);

                ans.push_back(a);

            }

        }

        return ans;

    }

};

        
   
