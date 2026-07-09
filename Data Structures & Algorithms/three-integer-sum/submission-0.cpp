class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>>s;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int left = i + 1;
            int right = n - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    s.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                } 
                else if (sum < 0) {
                    left++;
                } 
                else {
                    right--;
                }
            }
        }
        vector<vector<int>>ans(s.begin(),s.end());
        return ans;
    }
};
