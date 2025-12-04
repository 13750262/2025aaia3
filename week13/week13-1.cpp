//week13-1.cpp 聖誕倒數寫程式
int main() { //字母對應方向L左轉 R右轉
    char c; // 數字要轉動幾格
    int d; //一開始密碼鎖 指向50
    int now= 50; //轉動時 有幾次停在0
    int ans=0;
    while(cin >> c >>d) { //一直重複讀數字
        //if(c=='L') cout << "往左轉" << d << "格\n";
       // if(c=='R') cout << "往右轉" << d << "格\n";
        if(c=='L') now = now-d; //減掉
        if(c=='R') now = now+d; //加上

        now = (now%100+100)%100; //太大的 太小的  都限制在 0-99
        //cout << "現在的刻度是:" << now << "\n";
        if(now==0) ans++; //轉動時, 停在0的地方
    }
    cout<< "答案是:" << ans;
}
/*
L68
L30
R48
L5
R60
L55
L1
L99
R14
L82
*/
