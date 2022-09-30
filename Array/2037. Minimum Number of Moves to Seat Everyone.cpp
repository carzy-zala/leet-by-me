class Solution
{
public:
    int minMovesToSeat(vector<int> &seats, vector<int> &students)
    {
        int move = 0;
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());

        int j = 0;
        for (int i = 0; i < students.size(); i++)
        {
            move = move + abs(students[i] - seats[i]);
        }
        return move;
    }
};