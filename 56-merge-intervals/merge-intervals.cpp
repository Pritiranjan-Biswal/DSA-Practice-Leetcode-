class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //so first sort the interval
        sort(intervals.begin(), intervals.end());

        //create a vector to store the intervals
        vector<vector<int>>ans;

        //add the first interval
        ans.push_back(intervals[0]);

        //traverse the remaining
        for(int i=1; i<intervals.size(); i++) {
            if(intervals[i][0] <= ans.back()[1]) { 
                //here we check the first element of the current interval and the last elements of the last inserted interval



            //if the first element is smaller than the last element of the inserted elemnt , then simply overlapping is happening 
                ans.back()[1]=max(ans.back()[1], intervals[i][1]);

                //here the maximum between the last elemt is insertd ou of the curerent and the last insertd
            }
            else {
                //if no element no overlapping is happening , then simply insert the interval into the vector
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};