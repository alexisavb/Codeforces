#include <bits/stdc++.h>

using namespace std;

int main(){
    int cases;
    string hate = "I hate ", love = "I love ", it = "it", that = "that ";
    string str;
    cin >> cases;
    for(int i = 1; i <= cases; i++){
        if(i % 2 != 0) { 
            if(i == 1){ str += hate; }
            else { str += that + hate; }
        }
        else{ str += that + love; }
    }
    str += it;
    cout << str << endl;
    return 0;
}