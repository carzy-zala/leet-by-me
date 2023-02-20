class LUPrefix {
    vector<int> a;
    int m;
public:
    LUPrefix(int n) {
        vector<int> b(n,0);
        a=b;
        m=0;
    }
    
    void upload(int video) {
        a[video-1]++;
    }
    
    int longest() {
        int i;
        for(i=m;i<a.size();i++){
            if(a[i] == 0){
                break;
            }
        }
        m=i;
        return i;
    }
};

/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix* obj = new LUPrefix(n);
 * obj->upload(video);
 * int param_2 = obj->longest();
 */