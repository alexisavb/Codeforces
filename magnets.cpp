#include <bits/stdc++.h>

using namespace std;

int main(){
    int cases, total = 0;
    string str, strcarry;

    cin >> cases;
    for(int i = 0; i < cases; i++){
        cin >> str;
        if(i != 0){
            if(str[0] == strcarry[1]){ total++; }
        }else { total++; }
        strcarry = str;
    }
    cout << total << endl;
    return 0;
}
