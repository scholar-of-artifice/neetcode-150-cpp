class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        std::unordered_set<int> obs_set;
        for (const auto &n : nums)
        {
            if (obs_set.find(n) != obs_set.end())
            {
                return true;
            }
            else
            {
                obs_set.insert(n);
            }
        }
        return false;
    }
};