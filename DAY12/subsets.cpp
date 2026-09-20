class Solution {
public:

    void solve(vector<int>& nums, int index,
               vector<int>& current,
               vector<vector<int>>& ans) {

        // current subset ko answer mein add karo
        ans.push_back(current);

        // agar saare elements check ho gaye
        if (index == nums.size()) {
            return;
        }

        // OPTION 1: current element ko LO
        current.push_back(nums[index]);

        solve(nums, index + 1, current, ans);

        // OPTION 2: current element ko MAT LO
        current.pop_back();

        solve(nums, index + 1, current, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> current;

        solve(nums, 0, current, ans);

        return ans;
    }
};