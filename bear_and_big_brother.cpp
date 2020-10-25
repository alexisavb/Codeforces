#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, years = 0;
    cin >> a >> b;
    while(b >= a){
        a *= 3;
        b *= 2;
        years++;
    }
    cout << years << endl;
    return 0;
}