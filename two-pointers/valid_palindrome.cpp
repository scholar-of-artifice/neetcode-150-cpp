class Solution
{
public:
    std::string sanitize(const std::string_view &sv)
    {
        std::string out_s;
        out_s.reserve(sv.size());
        for (const auto &c : sv)
        {
            if (std::isalnum(c))
            {
                out_s.push_back(std::tolower(c));
            }
        }
        return out_s;
    }

    bool isPalindrome(string s)
    {
        auto s_san = sanitize(std::string_view(s));
        return std::equal(
            s_san.cbegin(),
            s_san.cbegin() + (s_san.size() / 2),
            s_san.crbegin());
    }
};