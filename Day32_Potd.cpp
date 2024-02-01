class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0,end=nums.size()-1;
    int mid = start+(end-start)/2;
    while(start<=end)
    {    if( (start==end-1) && (nums[start]==nums[end])){
            return nums[start];
        }   
        if(start==end){
            return nums[mid];
        }
        if(mid%2==0){
            if(nums[mid]==nums[mid+1]){
                start = mid+2;
            }
            else{
                end=mid;
            }
        }
        else{
            if(nums[mid]==nums[mid-1]){
                start=start+1;}
                else {
                    end=mid-1;
                }          
        }
     mid = start+(end-start)/2;
    }
     return 0;   
    }
};