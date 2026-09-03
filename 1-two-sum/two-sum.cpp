class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n =nums.size();
        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            int a=nums[i];
            int rem=target-a;
            if(mp.find(rem)!=mp.end()){
                return{mp[rem],i};

            }
            mp[a]=i;
        }
        return {};
    }
};