// 88. Merge Sorted Array

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        vector<int> mergeArr;
        int i = 0;
        int j = 0;

        while (i < m && j < n)
        {
            if (nums1[i] < nums2[j])
            {
                mergeArr.push_back(nums1[i]);
                i++;
            }
            else
            {
                mergeArr.push_back(nums2[j]);
                j++;
            }
        }

        while (i < m)
        {
            mergeArr.push_back(nums1[i]);
            i++;
        }
        while (j < n)
        {
            mergeArr.push_back(nums2[j]);
            j++;
        }

        for (int i = 0; i < n + m; i++)
        {
            nums1[i] = mergeArr[i];
        }
    }
};