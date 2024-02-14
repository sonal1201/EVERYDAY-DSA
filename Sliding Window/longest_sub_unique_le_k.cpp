// FIND THE LENGTH OF THE LONGEST SUBARRAY WITH UNIQUE ELEMENT LESS <= K
// USING THE CONCEPT OF MAP/FREQ...

#include <iostream>
#include <vector>
#include <map>

using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> freq; // it store key ans value
    int i = 0;
    int j = 0;
    int ans = 0;
    while (j < n)
    {
        // if the element is repeating it increasing the freq of the value
        // and serve as a unique element
        freq[arr[j]]++;
        while (i <= j && freq.size() > k)
        {
            // move left pointer 1 step left
            freq[arr[i]]--;
            // if the freq if i is 0 remove that
            if (freq[arr[i]] == 0)
            {
                freq.erase(arr[i]);
            }
            i++;
        }
        // if current segment is valid then update the ans..
        if (freq.size() <= k)
        {
            ans = max(ans, j - i + 1);
        }
        j++; // move right pointer right 1 step..
    }
    cout << ans;
}