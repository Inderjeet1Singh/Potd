class Solution {
public:
int indexInsert(vector<int>nums,int target){
    int start=0;
        int end=nums.size()-1;
        int mid=0;
        int ans;
        while(start<=end){
           mid=start+(end-start)/2;
           if(nums[mid]>target){
               end=mid-1;
           }
           else{
               ans=mid+1;
               start=mid+1;
           }
        }
        return ans;
    
}
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int mid=0;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else {
                end=mid-1;
            }
        }
        return indexInsert(nums,target);
    }
};