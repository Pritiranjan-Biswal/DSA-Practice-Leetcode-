class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //so first of all it is same as the majority element I
        //here we creata a map and store all the  elements in the map.
        //when we itertae the map., if the element is >n/3 . return that.

        int n= nums.size();
        unordered_map<int , int>mp;
        // we also create a result to store all the elements.
        vector<int> result;
        int mini=(n/3)+1;
        for(int i=0; i<n; i++) {
            mp[nums[i]]++;
             if(mp[nums[i]] == mini) {
            result.push_back(nums[i]);
        }
          if(result.size()==2) {
            break;
        }
        }
       
      
        return result;
    }
};