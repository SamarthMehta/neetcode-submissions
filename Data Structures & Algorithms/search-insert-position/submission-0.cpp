class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n = arr.size();
        int start = 0;
        int end = n-1;
        int index = -1;
        while(start<=end){
            int mid = (start) + (end-start)/2;
            if(arr[mid]==target){
                return mid;
            }

            if(arr[mid]<target){
                index = mid;
                start = mid + 1;
            }
            else{
                end = mid-1;
            }
        }
        return index+1;
    }
};