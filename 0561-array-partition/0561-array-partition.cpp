class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

        int maxi = 0;
        
        int i = 0;
        int j = 1;

        while(i < n)
        {
            int mini = min(nums[i],nums[j]);
            maxi = maxi + mini;
            i = i + 2;
            j = j + 2;
        }
        return maxi;
    }
};