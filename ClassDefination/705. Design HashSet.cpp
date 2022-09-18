class MyHashSet {
    int ar[1000001];
public:
    MyHashSet() {
        fill(ar,ar+1000000,-1);
    }
    
    void add(int key) {
        ar[key]=key;
    }
    
    void remove(int key) {
        ar[key]=-1;
    }
    
    bool contains(int key) {
        if(ar[key]==-1){
            return false;
        }
        else{
          return true;
        }
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */