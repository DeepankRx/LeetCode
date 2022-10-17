class Solution
{
    public:
        int maxIceCream(vector<int> &costs, int coins)
        {
            sort(costs.begin(), costs.end());
            int n = costs.size();

            int ans = 0, i = 0;
            for (i = 0; i < n; i++)
            {
                if (coins - costs.at(i) >= 0)
                {
                    coins -= costs.at(i);
                    ans++;
                }
                if (coins == 0)
                    break;
            }
            return ans;
        }
};