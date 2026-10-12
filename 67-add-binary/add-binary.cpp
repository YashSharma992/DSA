class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int carry=0;
        int i=a.size()-1,j=b.size()-1;
        while(i>=0&&j>=0){
            if(a[i]=='1'&&b[j]=='1'&&carry){
                carry=1;
                ans+='1';
            }
            else if(a[i]=='1'&&b[j]=='1'){
                carry=1;
                ans+='0';
            }
            else if((a[i]=='1'||b[j]=='1')&&carry==1){
                ans+='0';
                carry=1;
            }
            else if(a[i]=='1'||b[j]=='1'||carry){
                ans+='1';
                carry=0;
            }
            else{
                ans+='0';
                carry=0;
            }
            i--;
            j--;
        }
        while(i>=0){
            if(a[i]=='1'&&carry){
                ans+='0';
                carry=1;
            }
            else if(a[i]=='1'||carry){
                ans+='1';
                carry=0;
            }
            else{
                ans+='0';
                carry=0;
            }
            i--;
        }
        while(j>=0){
            if(b[j]=='1'&&carry){
                ans+='0';
                carry=1;
            }
            else if(b[j]=='1'||carry){
                ans+='1';
                carry=0;
            }
            else{
                ans+='0';
                carry=0;
            }
            j--;
        }
        if(carry)
        ans+='1';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};