/*
    Author: Alexis Osnaya.
    URL: https://codeforces.com/problemset/problem/4/C
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int cases;
    string str;
    map<string,int> mp;
    map<string,int> :: iterator it;
    cin >> cases;
    for(int i = 0; i < cases; i++){
        cin >> str;
        it = mp.find(str); 
        if(it != mp.end()){ cout << str << it->second++ << endl; }
        else{ cout << "OK" << endl; mp[str]++; }
    }
    return 0;
}