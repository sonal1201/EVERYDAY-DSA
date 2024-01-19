// Check if array is sorted

// Input:
// N = 5
// arr[] = {10, 20, 30, 40, 50}
// Output: 1
// Explanation: The given array is sorted.


#include <bits/stdc++.h>
using namespace std;
    bool arraySortedOrNot(int arr[], int n) {
       bool flag=1;
       for(int i=0;i<n-1;i++){
           if(arr[i]>arr[i+1]){
               return false;
           }
       }
        return true;
    }
    
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        bool ans =arraySortedOrNot(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
