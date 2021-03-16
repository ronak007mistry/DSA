#include "bits/stdc++.h"
using namespace std;
void solve(vector<int> nums, vector<vector<int>> &ans, int idx)
{
    if (idx == nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int i = idx; i < nums.size(); i++)
    {
        if (i != idx and nums[i] == nums[idx])
            continue;
        swap(nums[i], nums[idx]);
        solve(nums, ans, idx + 1);
    }
}
vector<vector<int>> permute(vector<int> nums)
{
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    solve(nums, ans, 0);
    return ans;
}

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<vector<int>> res = permute({1, 2, 2});
    for (auto i : res)
    {
        for (auto ii : i)
        {
            cout << ii << " ";
        }
        cout << "\n";
    }
}