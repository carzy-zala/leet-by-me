class Solution {
public:
    string interpret(string command) {
        
        string c = "";
        
        for(int i=0;i<command.length();i++){
            if((command[i]>='a' && command[i<='z']) || (command[i]>='A' && command[i]<='Z')){
                c = c+command[i];
            }
            else{
                if(command[i]=='(' && command[i+1]==')'){
                    c = c+"o";
                }
            }
        }
        
        return c;
    }
};