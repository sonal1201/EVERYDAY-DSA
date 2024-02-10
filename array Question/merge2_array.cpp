// SORTING METHOD...
//  O(NLOGN)
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        // Sorting Method
        for (int i = 0; i < n; i++)
        {
            nums1[m + i] = nums2[i];
        }

        sort(nums1.begin(), nums1.end());
    }
};

// TWO POINTER APPOARCH
// TC -> O(N+M)...
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        vector<int> ans;
        int i = 0;
        int j = 0;
        while (i < m && j < n)
        {
            if (nums1[i] < nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
            }
            else
            {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        // Exactly 1 array out of array
        //  will leftout with some element.....
        while (i < m)
        {
            ans.push_back(nums1[i]);
            i++;
        }
        while (j < n)
        {
            ans.push_back(nums2[j]);
            j++;
        }
        // COPYING ans element in nums1 element...
        for (int i = 0; i < n + m; i++)
        {
            nums1[i] = ans[i];
        }
    }
};
