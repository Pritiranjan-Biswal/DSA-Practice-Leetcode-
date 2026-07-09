class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int n= nums.size();
        // int currMax=nums[0];
        // int currMin=nums[0];
        // int ans=nums[0];
        // for(int i=1; i<n; i++) {
        //     if(nums[i]<0) {
        //         swap(currMax, currMin);
        //     }
        //     currMax=max(nums[i], currMax*nums[i]);
        //     currMin=min(nums[i], currMin*nums[i]);

        //     ans=max(ans, currMax);
        // }
        // return ans;
        int n=nums.size();


        int max_pro=nums[0];
        for(int i=0; i<n; i++) {
            int product=1;
            for(int j=i; j<n; j++) {
                product*=nums[j];
                max_pro=max(max_pro, product);
            }
            
        }
        return max_pro;
    }
};