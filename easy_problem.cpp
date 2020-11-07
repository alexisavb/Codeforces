#include <bits/stdc++.h>

using namespace std;

int main(){
    int cases, a;
    bool flag = false;
    cin >> cases;
    while(cases-- > 0){
        cin >> a;
        if(a == 1) {flag = true;}
    }
    if(flag){ cout << "HARD" << endl; }
    else { cout << "EASY" << endl; }
    return 0;
}