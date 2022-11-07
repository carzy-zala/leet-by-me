class Solution {
public:
    int firstUniqChar(string s) {
      bool f;
      int index=-1;

      if(s.size()==1){
          return 0;
      }

      for(int i = 0; i<s.size(); i++){
          index=i;
          f=false;
          for(int j=0;j<s.size();j++){
              if(i==j){
                  continue;
              }
              if(s[i]==s[j]){
                  f=true;
                  index=-1;
                  break;
              }
          }
          if(f==false){
              break;
          }
      }

      return index;
    }
};