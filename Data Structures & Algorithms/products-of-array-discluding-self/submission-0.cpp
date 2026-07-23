class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int mul=1;
            for(int j = 0; j < n; j++){
                if(i!=j){
                mul=mul*nums[j];
            }
            }
            ans.push_back(mul);
        
        }
        return ans;
    }
};
