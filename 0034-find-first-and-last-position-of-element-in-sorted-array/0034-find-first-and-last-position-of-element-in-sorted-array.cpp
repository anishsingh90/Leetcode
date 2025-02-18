class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
    
    while(s<=e){
        for(int i=0; i<n; i++){
            if(nums[s] == target && nums[e] == target){
                return{s,e};
            } 
            if(nums[s] < target){
                s++;
            }
            else{
                e--;
            }
        }
        
    }
    return {-1,-1};
    }
};