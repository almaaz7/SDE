    #include<iostream>
    #include<vector>
    using namespace std;
    
    
    vector<int> merge(vector<int>& nums1,vector<int>& nums2)
    {
        vector<int> c(nums1.size()+nums2.size());
        int i = 0;
        int j = 0;
        int k = 0;
        while(i<nums1.size() && j<nums1.size()){
            if(nums1[i] < nums2[j]){
                c[k++] = nums1[i++];
            }else{
                c[k++] = nums2[j++];
            }
        }
        while(i<nums1.size()){
            c[k++]=nums1[i++];
        }
        while(j<nums2.size()){
            c[k++]=nums2[j++];
        }
        return c;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> c = merge(nums1,nums2);
        double median = 0;
        if(c.size()%2==0){
            int size1 = c.size()-1;
            int a = size1/2;
            int b = a+1;
            
            median = double(c[a]+c[b])/2;
        }else{
            int size2 = c.size()-1;
            int g = size2/2;
            median = c[g];
        }
        return median;
    }
    int main()
    {
        vector<int> nums1 = {1,2};
        vector<int> nums2 = {3,4};
        cout<<findMedianSortedArrays(nums1,nums2);
    }