//TWO POINTER APPROACH

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        res=nums;
        //sort result vector
        sort(res.begin() , res.end());
        int i=0;
        int j=n-1;
        //traverse and check element till equal from start(i=0)
        for(;i<n;i++)
        {
            if(nums[i] != res[i])
               break;
        }
        //traverse and check element till equal from end(j=n-1)
        for(;j>=0;j--)
        {
            if(nums[j] != res[j])
               break;
        }
        int count=0;
        //traverse and count element which are not  equal from i to j
        for(int k=i; k<=j; k++)
        {
            count++;
        }
        return count;
    }
};
