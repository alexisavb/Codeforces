#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    bool flag = true;
    cin >> str;

    for(int i = 1; i < str.size(); i++){
        if(str[i] >= 97 && str[i] <= 122){ flag = false; break;}
    }

    if(flag){
        if(str[0] >= 97 && str[0] <= 122){ str[0] = str[0] - ('a' - 'A'); }
        else { str[0] = str[0] + ('a' - 'A'); }
        for(int i = 1; i < str.size(); i++){
                if(str[i] <= 90 && str[i] >= 65){ str[i] = str[i] + ('a' - 'A'); }  
        }
    }
    cout << str << endl;
    return 0;
}
