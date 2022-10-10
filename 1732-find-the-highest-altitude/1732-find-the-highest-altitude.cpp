class Solution
{
    public:
        int largestAltitude(vector<int> &gain)
        {
            int currMax = 0;
            int max = INT_MIN;
            int n = gain.size();
            vector<int> peaks;
            peaks.push_back(0);
            for (int i = 0; i < n; i++)
            {
                peaks.push_back((peaks.at(i) - gain.at(i)));
            }
            for (int i = 0; i < peaks.size(); i++)
            {
                peaks.at(i) *= -1;
            }
            return* max_element(peaks.begin(), peaks.end());
        }
};