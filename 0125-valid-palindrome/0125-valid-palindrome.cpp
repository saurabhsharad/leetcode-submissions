class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        for(int i =0;i<n;i++){
           s[i]=tolower(s[i]);
        }
       
        
        int l=0;
        int r=n-1;
        while(l<=r){
            if(!isalnum(s[l])){
                 l++;
            
            }
            else if(!isalnum(s[r])){
                 r--;
            }
            else if(s[l]!=s[r]){
                return false;
            }
            else
              {
                    l++;
                r--;
              } 
                
        }
        return true;
    }
};