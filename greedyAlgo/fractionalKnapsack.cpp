// FRACTIONAL KNAPSACK//

struct Item
{
    int value;
    int weight;
};

bool cmp(Item i1, Item i2)
{
    return i1.value * i2.weight > i2.value * i1.weight;
}

class Solution
{
public:
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr + n, cmp);
        double ans = 0.0;
        for (int i = 0; i < n; i++)
        {
            if (W >= arr[i].weight)
            {
                W -= arr[i].weight;
                ans += arr[i].value;
            }
            else
            {
                ans += W * (arr[i].value / (double)arr[i].weight);
                break;
            }
        }
        return ans;
    }
};