class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> um;

        int ssize = nums.size();
        for(int i = 0; i < ssize; i++){
            auto it = um.find(target - nums[i]);
            if(it != um.end())
                return {it->second,i};
            
            um[nums[i]] = i;
        }
        return{};
    }
};
