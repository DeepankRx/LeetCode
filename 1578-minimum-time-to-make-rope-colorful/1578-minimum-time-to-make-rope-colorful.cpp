class Solution
{
    public:
        int minCost(string colors, vector<int> &neededTime)
        {
            int totalTime = 0;

            for (int i = 1; i < colors.size(); i++)
            {
                if (colors[i] == colors[i - 1])
                    // totalTime += neededTime[i] <= neededTime[i - 1] ? neededTime[i] : neededTime[i - 1];
                    if(neededTime[i] <= neededTime[i - 1])
                    {
                            totalTime += neededTime[i];
                            swap(neededTime[i],neededTime[i-1]);
                    }
                    else
                    {
                            totalTime += neededTime[i-1];
                    }
            }
            return totalTime;
        }
};