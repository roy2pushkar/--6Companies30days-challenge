class Solution {
public:
    int numberOfSubstrings(string s) {
       int start=0;
       int end=0;
       int count=0;
       int n=s.size()-1;
       unordered_map<char ,int>mp;
       while(end != s.size())
       {
           mp[s[end]]++;
           while(mp['a'] && mp['b'] &&mp['c'])
           {
             count+=1+(n-end);
             mp[s[start]]--;
             start++;
           }
           end++;
       }
       return count;
    }
};
