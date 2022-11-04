class Solution {
    string revert(string x){
        int s=0;
        int e=x.size()-1;
        
        while(s<=e){
            swap(x[s],x[e]);
            s++;
            e--;
        }
        
        return x;
    }
    
public:
    string addBinary(string a, string b) {
        string ans="";
        
        int i=a.size()-1;
        int j=b.size()-1;
        char carry='0';
        
        // when both string are present
        while(i>=0 && j>=0){
            
            // when both the bits are one 
            if(a[i]=='1' && b[j]=='1'){
                // 1+1+1
                if(carry=='1'){
                    ans.push_back('1');
                }
                // 1+1+0
                else{
                    ans.push_back('0');
                    carry='1';
                }
            }
            
            else{
              if(a[i]=='1' || b[j]=='1'){
                //   1+0+1
                  if(carry=='1'){
                      ans.push_back('0');
                  }
                // 0/1+1/0+0
                  else{
                      ans.push_back('1');
                  }
              }
                
              else{
                  // 0 + 0 + 1
                  if(carry=='1'){
                      ans.push_back('1');
                      carry='0';
                  }
                  // 0 + 0 + 0
                  else{
                      ans.push_back('0');
                  }
              }
            }
            
            cout << ans<< " ";
            i--;
            j--;
        }
        
        // when a is present        
        while(i>=0){
            if(carry=='1'){
                if(a[i]=='1'){
                    ans.push_back('0');
                }
                else{
                    ans.push_back('1');
                    carry='0';
                }
            }
            else{
                ans.push_back(a[i]);
            }
            
            i--;
        }
        
        // when b is present        
        while(j>=0){
            if(carry=='1'){
                if(b[j]=='1'){
                    ans.push_back('0');
                }
                else{
                    ans.push_back('1');
                    carry='0';
                }
            }
            else{
                ans.push_back(b[j]);
            }
            j--;
        }
        
        
        
        if(carry=='1'){
            ans.push_back('1');
        }
        
       
        
        return revert(ans);
    }
};