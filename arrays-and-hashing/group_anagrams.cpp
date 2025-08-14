class Solution
{
public:
    std::string produce_id(std::string s)
    {
        std::sort(s.begin(), s.end());
        return s;
    }

    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        std::unordered_map<std::string, std::vector<std::string>> groupings;
        for (const auto &s : strs)
        {
            auto id = produce_id(s);
            groupings[id].push_back(s);
        }
        std::vector<std::vector<std::string>> flat_groups;
        for (const auto &[k, v] : groupings)
        {
            flat_groups.push_back(v);
        }
        return flat_groups;
    }
};