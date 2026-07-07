class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //first i have to calculate the total sum of the array

        // here i have to find the product og the array except sely that means when i preent a particular element the multiplication should be in sucha way that skip that one.
          int n=nums.size();
        vector<int>ans;
        int zero=0;
        int mul=1;
        for(int i=0; i<n; i++) {
            if(nums[i]==0) {
                zero++;
            }
            else {
                mul*=nums[i];
            }
        }
      
        
        for(int i=0; i<n; i++) {
            if(zero>1) {

                 ans.push_back(0);
                
            }
            else if(zero==1){
                if(nums[i]==0) {
                    ans.push_back(mul);
                }
                else {
                    ans.push_back(0);
                }
                   
            } 
            else {
                ans.push_back(mul/nums[i]);
            } 
        }
        return ans;
    }
};