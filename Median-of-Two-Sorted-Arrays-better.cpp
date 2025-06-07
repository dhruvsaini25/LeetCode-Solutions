class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //better approach
        unordered_map<int,int> mpp;
        int n=nums1.size();
        int m=nums2.size();
        int k=m+n;
        int ind2=k/2;
        int ind1=ind2-1;
        int cnt=0;
        int ind1el=-1;
        int ind2el=-1;
        int i=0, j=0;
        while (i<n && j<m){
            if (nums1[i]<nums2[j]){
                if (cnt==ind1) ind1el=nums1[i];
                if (cnt==ind2) ind2el=nums1[i];
                cnt++;
                i++;
            } else {
                if (cnt==ind1) ind1el=nums2[j];
                if (cnt==ind2) ind2el=nums2[j];
                cnt++;
                j++;
            }
        }
        while (i<n){
            if (cnt==ind1) ind1el=nums1[i];
            if (cnt==ind2) ind2el=nums1[i];
            cnt++;
            i++;
        }
        while (j<m){
            if (cnt==ind1) ind1el=nums2[j];
            if (cnt==ind2) ind2el=nums2[j];
            cnt++;
            j++;
        }
        if (k%2==1) return (double)ind2el;
        return (double)((double)(ind1el+ind2el))/2.0;
    }
};