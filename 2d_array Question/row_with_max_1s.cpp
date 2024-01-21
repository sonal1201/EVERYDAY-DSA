// Row with max 1s
// Input:
// N = 4 , M = 4
// Arr[][] = {{0, 1, 1, 1},
//            {0, 0, 1, 1},
//            {1, 1, 1, 1},
//            {0, 0, 0, 0}}
// Output: 2
// Explanation: Row 2 contains 4 1's (0-based
// indexing).

//    Initialize two variables, max to track the maximum count of 1s, 
//    and index to store the corresponding row index.
//    in starting we assume that there are now row exits that conatins 1 so index=-1,max=0,
//    Use a loop to iterate through each row of the matrix.
//    For each row, initialize a count variable to keep track of the number of 1s in that row.
//    Compare the count of 1s in the current row with the maximum count so far.
//    If the current row has more 1s, update the maximum count (max) and the corresponding row index (index).

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int max= 0;
	    int index = -1;
	    for(int i=0;i<n;i++){
	        int cnt=0;
	        for(int j=0;j<m;j++){
	            if(arr[i][j]==1){
	                cnt++;
	            }
	        }
	        if(cnt>max){
	            max = cnt;
	            index=i;
	        }
	    }
	    return index;
	}

};


