class Solution
{
    public:
        bool strongPasswordCheckerII(string p)
        {
            int n = p.size();
            if (n < 8)
                return false;
            bool isLowerCase = false;
            bool isUpperCase = false;
            bool isDigit = false;
            bool isSpecial = false;
            for (int i = 0; i < n; i++)
            {
                if (i > 0 && p.at(i - 1) == p.at(i))
                {
                    return false;
                }
                if (p.at(i) >= 'a' && p.at(i) <= 'z')
                    isLowerCase = true;
                if (p.at(i) >= 'A' && p.at(i) <= 'Z')
                    isUpperCase = true;
                if (p.at(i) >= '0' && p.at(i) <= '9')
                    isDigit = true;
                if (p[i] == '!' || p[i] == '@' || p[i] == '#' || p[i] == '$' || p[i] == '%' || p[i] == '^' || p[i] == '&' || p[i] == '*' || p[i] == '(' || p[i] == ')' || p[i] == '-' || p[i] == '+')
                    isSpecial = true;
            }
           
                if(isLowerCase && isUpperCase && isDigit && isSpecial)
                        return true;
                return false;
        }
};