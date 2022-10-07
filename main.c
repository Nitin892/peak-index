int peakIndexInMountainArray(vector<int>& arr) {
        int t = 0;
        for (int i = 1; i <= arr.size() - 1; ++i) {
            if (!(arr[i-1] < arr[i])) {
                t = i-1;
                break;
            }
        }
        return t;
    }
