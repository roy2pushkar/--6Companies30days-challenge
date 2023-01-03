class Solution {
public:
    string longestPrefix(string S) {
       string ans="";
       vector<int>pos(S.size() ,0 );
       int i=0;
       int j=1;
       while(j < S.size())
       {
           if(S[i]==S[j])
           {
               pos[j]=i+1;
               i++;
               j++;

           }
           else if(i)
           {
               i=pos[i-1];
           }
           else
           {
               j++;
           }
       }
       ans=S.substr(0,i);
       return ans;

    }
};
