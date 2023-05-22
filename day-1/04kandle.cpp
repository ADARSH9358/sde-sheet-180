// https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;int maxi=-1000000;

        for(int i=0;i<nums.size();i++){
           sum=sum+nums[i];
             maxi=max(sum,maxi);
           if(sum<0){
            sum=0;
           }
          
        }
        return maxi;
    }
};
