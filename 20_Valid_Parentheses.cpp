#include <iostream>
#include <stack>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        if (s.size() <= 1)
        {
            return false;
        }
        stack<int> ms;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                ms.push(s[i]);
                continue;
            }

            if (s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if (ms.empty())
                {
                    return false;
                }
                if ((s[i] == ')' && ms.top() == '(') || (s[i] == '}' && ms.top() == '{') || (s[i] == ']' && ms.top() == '['))
                {
                    ms.pop();
                    continue;
                }
                return false;
            }
        }
        if (ms.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
}