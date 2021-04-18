class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int i = 0, j = 0;
        int n = nums1.size(), m = nums2.size();
        vector<int> v;
        while (i < n || j < m)
        {
            if (i == n)
            {
                v.push_back(nums2[j]);
                j++;
            }
            else if (j == m)
            {
                v.push_back(nums1[i]);
                i++;
            }
            else
            {
                if (nums1[i] < nums2[j])
                {
                    v.push_back(nums1[i]);
                    i++;
                }
                else
                {
                    v.push_back(nums2[j]);
                    j++;
                }
            }
        }
        float sum = 0, median;
        n += m;
        if (n % 2)
        {
            return v[n / 2];
        }
        else
        {
            sum = v[n / 2 - 1] + v[n / 2];
            median = sum / 2;
            return median;
        }
    }
};
