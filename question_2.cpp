class Solution {
public:
    void helper(int st ,int sum ,int n, vector<int> &ans ,  vector<vector<int> > &res ,int k)
    {
        //base condition
        if(sum==n && k==0)
        {
            res.push_back(ans);
            return;
        }
        if(sum > n)
           return ;

        for(int i=st; i<=9; i++)
        {
            if(i > 9)
               break;

            ans.push_back(i);
            //recursive call
            helper(i+1 ,sum+i, n ,ans ,res,k-1);
            //backtracing
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>ans;
        vector<vector<int> >res;
        helper(1,0,n,ans,res,k);
        return res;
    }
};
