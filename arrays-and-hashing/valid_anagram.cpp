class Solution
{
public:
    std::unordered_map<char, size_t> create_freq_map(const std::string &s) const
    {
        std::unordered_map<char, size_t> fc_map;
        for (const auto &c : s)
        {
            if (fc_map.find(c) != fc_map.end())
            {
                fc_map[c] += 1;
            }
            else
            {
                fc_map.insert({c, 1});
            }
        }
        return fc_map;
    }

    bool isAnagram(string s, string t)
    {
        return this->create_freq_map(s) == this->create_freq_map(t);
    }
};