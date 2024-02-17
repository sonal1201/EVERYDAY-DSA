// LC->581. Shortest Unsorted Continuous Subarray

// NOT A OPTIMAL SOLUTION
class Solution
{
public:
    int findUnsortedSubarray(vector<int> &nums)
    {
        vector<int> ans = nums;       // copying the array in new array
        sort(ans.begin(), ans.end()); // sorting the new array
        int s = -1, e = -2;           // e=-2 because if the array is sorted..
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != ans[i])
            { // checking new array i and array i is equal or not
                if (s == -1)
                    s = i; // if not then s=index here we got our 1st index of the unsorted array
                else
                    e = i; // here we will get the last index of the unsorted array...
            }
        }
        return e - s + 1; // return end-start+1
    }
};