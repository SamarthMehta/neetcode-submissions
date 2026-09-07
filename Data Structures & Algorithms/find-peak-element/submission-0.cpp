class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        int res = -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            //increasing region
            if(mid<n-1 && arr[mid]<arr[mid+1]){
                start = mid + 1;
            }
            //decreasing region
            else{
                res = mid;
                end = mid -1;
            }
        }
        return res;
    }
};