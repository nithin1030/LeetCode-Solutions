double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int firstArraySize = nums1.size(), secondArraySize = nums2.size(), thirdArraySize;
        vector<int>nums3(0);
        int i = 0, j = 0;
        while(i != firstArraySize && j != secondArraySize){
            if(nums1[i] < nums2[j]){
                nums3.push_back(nums1[i]);
                i++;
            } else {
                nums3.push_back(nums2[j]);
                j++;
            }
        }
        
        while(i != firstArraySize){
            nums3.push_back(nums1[i]);
            i++;
        }
        
        while(j != secondArraySize){
            nums3.push_back(nums2[j]);
            j++;
        }
        
        
        thirdArraySize = nums3.size();

        if(thirdArraySize % 2 == 0){
            return (double)((nums3[thirdArraySize / 2] + nums3[(thirdArraySize / 2) - 1])) / 2;
        } else {
            return (double)nums3[thirdArraySize / 2];
        }
        return 0;
    }