
//JAVA solution
class Solution {
    public int maxRotateFunction(int[] nums) {
       int sum=0;
      int fun=0;
      int n=nums.length;

      for(int i=0;i<n;i++)
      {
          sum+=nums[i];
          fun+=i*nums[i];

      }

      int max=fun;
      for(int i=n-1;i>0;i--)
      {
          max=Math.max(max,fun+sum-(n*nums[i]));
          fun=fun+sum-(n*nums[i]);

      }

      return max;
    }
}

//CPP solution
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int curr=0;
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            curr+=(i*nums[i]);
        }
        ans=curr;
        for(int i=n-1;i>=0;i--){
            curr+=sum-(n*nums[i]);
            ans=max(curr,ans);
        }
        return ans;
    }
};
