class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> v; 
    
            for (int i = 0; i < nums.size(); i++) {
                int complement = target - nums[i]; 
                
                if (v.find(complement) != v.end()) { 
                    return {v[complement], i};
                }
    
                v[nums[i]] = i; 
            }
    
            return {}; 
        }
    };