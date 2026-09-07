class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstPosition(nums,target),lastPosition(nums,target)};
    }

    int firstPosition(vector <int>& arr,int target){
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        int fpos = -1;
        while(start<=end){
            int mid = (start) + (end-start)/2;
            if(arr[mid]==target){
                fpos = mid;
                end = mid-1;
            }
            else if(arr[mid]<target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return fpos;
    }

    int lastPosition(vector <int>& arr,int target){
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        int lpos = -1;
        while(start<=end){
            int mid = (start) + (end-start)/2;
            if(arr[mid]==target){
                lpos = mid;
                start = mid+1;
            }
            else if(arr[mid]<target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return lpos;
    }
};