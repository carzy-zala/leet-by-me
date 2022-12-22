class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool>isThere(rooms.size(),false);

        queue<int>q;
        q.push(0);

        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                int room = q.front();
                q.pop();

                isThere[room] = true;

                for(auto element : rooms[room]){
                    if(isThere[element] == false){
                        q.push(element);
                    }
                }
            }
        }

        return count(isThere.begin(),isThere.end(),true) == rooms.size();
    }
};