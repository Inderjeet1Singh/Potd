class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                ans[start++]=nums[i];
            }
            else{
                ans[end--]=nums[i];
            }
        }
        return ans;
    }
};