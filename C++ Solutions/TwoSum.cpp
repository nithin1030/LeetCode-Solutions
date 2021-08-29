vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> map;
        int size = nums.size(), x;
        for(int i = 0; i < size; i++){
            x = target - nums[i];
            if(map.find(x) != map.end()){
                return {i, map[x]};
            } else {
                map[nums[i]] = i;
            }
        }
        return {};
    }