#include <bits/stdc++.h>

using namespace std;

int main(){
    int cases, a, b;
    cin >> cases;
    while(cases-- > 0){
        cin >> a >> b;
        if(a % b != 0){ cout << b - a % b << endl; }
        else { cout << 0 << endl; }
    }
    return 0;
}