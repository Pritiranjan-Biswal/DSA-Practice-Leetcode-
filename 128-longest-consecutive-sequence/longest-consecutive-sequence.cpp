class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)  //if no element is present return 0
        return 0;
        //so first we have to check create a set and stote all the elements their.
        int longest=1;
        unordered_set<int> st;
        
        for(int i=0; i<n; i++) {
            st.insert(nums[i]);
        }
        //after that iterate the set and check wheather the previous element is present in the set or not.
        //if the previous element is present, we can not count the longest sequence.
        //so we have to check, wheather the elements have no previous element.
        //so that we can easily count the longest sequence.


        //so now iterate the set

        for(auto it: st)  {
            if(st.find(it-1) == st.end()) {  //if here we got the previous element , then we can't found the largest.
            int cnt=1;
            int x= it;
            while(st.find(x+1) != st.end()) {  // if the element is found, then check others wheather present or not
                x=x+1;
                cnt=cnt+1;
                }
                longest=max(longest, cnt);

            }
        }
        return longest;
    }
};