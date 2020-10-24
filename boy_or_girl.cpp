#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;
    set<char> values(str.begin(), str.end());
    if(values.size() % 2 == 0){ cout << "CHAT WITH HER!" << endl; }
    else{ cout << "IGNORE HIM!" << endl; }
}