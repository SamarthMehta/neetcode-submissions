class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        int res = -1;
        while(start<=end){
            int mid = (start)+(end-start)/2;
            //increasing part
            if(arr[mid]>arr[n-1]){
                start = mid + 1;
            }
            else{
                res = mid;
                end = mid - 1;
            }
        }
        return arr[res];
    }
};