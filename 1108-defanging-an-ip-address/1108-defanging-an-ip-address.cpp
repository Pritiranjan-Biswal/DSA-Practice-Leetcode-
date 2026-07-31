class Solution {
public:
    string defangIPaddr(string address) {
        int index=0;
        string ans="";
        while(index<address.length()) {
            if(address[index]=='.') {
                ans+="[.]";
            }
            else {
                ans+=address[index];
            }
            index++;
        }
        return ans;
    }
};