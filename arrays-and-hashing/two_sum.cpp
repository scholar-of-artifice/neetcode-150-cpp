class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
    std:
        unordered_map<int, size_t> obs_map;
        for (size_t i = 0; i < nums.size(); ++i)
        {
            const auto val{nums.at(i)};
            const auto complement{target - val};
            if (obs_map.find(complement) != obs_map.end())
            {
                return {static_cast<int>(obs_map[complement]), static_cast<int>(i)};
            }
            else
            {
                obs_map.insert({val, i});
            }
        }
        // we are guaranteed a solution
        return {};
    }
};