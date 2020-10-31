#include <bits/stdc++.h>

using namespace std;

int main(){
    string str, str2;
    cin >> str >> str2;
    if(str.size() != str2.size()) {cout << "NO" << endl; return 0;}
    for(int i = 0, j = str2.size() - 1; i < str.size(); i++, j--){
        if(str[i] != str2[j]){cout << "NO" << endl; return 0;}
    }
    cout << "YES" << endl;
    return 0;
}