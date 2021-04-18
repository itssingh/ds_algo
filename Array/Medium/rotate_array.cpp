class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n;
        n = nums.size();
        if (k > n)
            k %= n;
        if (k)
        {
            vector<int> aux(nums.begin(), nums.end());
            for (int i = 0; i < n; i++)
                nums[(i + k) % n] = aux[i];
        }
    }
};