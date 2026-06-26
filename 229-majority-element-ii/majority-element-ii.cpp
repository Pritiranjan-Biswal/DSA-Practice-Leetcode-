class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //so first of all it is same as the majority element I
        //here we creata a map and store all the  elements in the map.
        //when we itertae the map., if the element is >n/3 . return that.

        // int n= nums.size();
        // unordered_map<int , int>mp;
        // // we also create a result vector to store all the elements.
        // vector<int> result;
        // int mini=(n/3)+1;
        // for(int i=0; i<n; i++) {
        //     mp[nums[i]]++;
        //      if(mp[nums[i]] == mini) {
        //     result.push_back(nums[i]);
        // }
        //   if(result.size()==2) {
        //     break;
        // }
        // }
       
      
        // return result;
        int n= nums.size();
        int cnt1=0,cnt2=0;
        int ele1=INT_MIN, ele2=INT_MIN;
        for(int i=0; i<n; i++) {
            if(cnt1==0 && ele2 != nums[i]) { //the element should not be same with the ele1.
                cnt1=1;
                ele1=nums[i];
            }
            else if(cnt2==0 && ele1 != nums[i]){  //also the element should not be same with the ele2.
                cnt2=1;
                ele2=nums[i];
            }
            else if(nums[i] == ele1) {
                cnt1++;
            }
            else if(nums[i]==ele2) {
                cnt2++;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }
        vector<int>ans;
        int mini=int(n/3)+1;
        cnt1=0,cnt2=0;
        for(int i=0; i<n; i++)  {
            if(nums[i]==ele1) {
                cnt1++;
            }
            else if(nums[i]==ele2){
                cnt2++;
            }
        }
        if(cnt1>=mini)  {
            ans.push_back(ele1);
        }
        if(cnt2>=mini) {
            ans.push_back(ele2);
        }

        return ans;

    }
};