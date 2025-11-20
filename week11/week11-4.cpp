//week11-4.cpp
class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length() -1, j=b.length() -1;
        vector<int>ans;
        int carry = 0;
        while (i>=0 || j>=0){
            int now =carry; //現在位數要加法
            if(i>=0){
                now+=a[i] - '0'; //字母a[i] - '0' 變數值
                i--;  //倒過來的迴圈for(int i=n-1, i>=0 i--)
            }
            if(j>=0){
                now+= b[j] - '0';
                j--;
            }
            ans.push_back(now%2);
            carry = now/2; //看有沒有進位
        }
        if(carry>0) ans.push_back(carry);//迴圈外面ans可以拿來用
        string strAns;
        for(int i=ans.size()-1; i>=0; i--){
            strAns = strAns + (char)(ans[i]+'0');
        }
        return strAns;
    }
};
