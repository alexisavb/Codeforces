#include <bits/stdc++.h>

using namespace std;

int main(){
    int val, i = 0, count = 0;
    string str;
    cin >> val >> str;
    while(i < val - 1){
        if(str[i] == str[i + 1]){count++;}
        i++;
    }
    cout << count << endl;
    return 0;
}