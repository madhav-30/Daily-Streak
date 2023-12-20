class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x: nums){
            mp[x]++;
        }

        for(auto c: mp){
            if(c.second>1){
                return true;
            }
        }
        return false;
    }
};