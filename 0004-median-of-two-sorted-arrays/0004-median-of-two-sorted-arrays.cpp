class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++)
        nums1.push_back(nums2[i]);
        sort(nums1.begin(),nums1.end());
        int k=nums1.size();
        if(k%2==1)
        return double(nums1[nums1.size()/2]);
        else {
            int l=(k/2)-1;
            double m=(nums1[k/2]+nums1[l])/2.0;
            return m;
        }
    }
};