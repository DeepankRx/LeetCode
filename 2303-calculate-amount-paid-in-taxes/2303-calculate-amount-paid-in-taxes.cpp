class Solution
{
    public:
        double calculateTax(vector<vector < int>> &b, int income)
        {
           	//from votrubac
            double res = 0, prev = 0;
            for (int i = 0; i < b.size(); prev = b[i++][0])
                res += max(0.0, (-prev + min(income, b[i][0])) *b[i][1] / 100);
            return res;
        }
};