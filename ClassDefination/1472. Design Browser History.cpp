    class BrowserHistory {
    string *H;
    int r , l , c;
public:
    BrowserHistory(string homepage) {
        H = new string[5000];
        r = c = 0;
        H[c] = homepage;
        
    }
    
    void visit(string url) {
        H[++c] = url;
        r = c;
    }
    
    string back(int steps) {
        c = max(c-steps, 0);
        return H[c];
    }
    
    string forward(int steps) {
        c = min(c+steps, r);
        return H[c];
    }
};
