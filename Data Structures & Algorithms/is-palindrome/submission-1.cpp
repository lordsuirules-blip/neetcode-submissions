class Solution {
public:
    bool isPalindrome(string s) {
    vector<char> v;

    for (char c : s)
    {
        if (isalnum(c))
        {
            v.emplace_back(toupper(c));
        }
    }

    for (int i = 0; i < v.size() / 2; i++)
    {
        if (v[i] != v[v.size() - 1 - i])
        {
           return false;
        }
    }
    return true;
    }
};
