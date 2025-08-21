class Solution
{
public:
    bool isValid(string s)
    {
        std::unordered_map<char, char> pairing_map = {
            {')', '('},
            {'}', '{'},
            {']', '['},
            {'>', '<'},
        };
        std::stack<char> todo_stack;
        for (const char &c : s)
        {
            if (pairing_map.find(c) == pairing_map.end())
            {
                todo_stack.push(c);
            }
            else if (!todo_stack.empty() && todo_stack.top() == pairing_map.at(c))
            {
                todo_stack.pop();
            }
            else
            {
                return false;
            }
        }
        return todo_stack.empty();
    }
};