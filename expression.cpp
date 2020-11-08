#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, max = 0;
    cin >> a >> b >> c;
    if(max < a * b * c){ max = a * b * c; }
    if(max < (a + b) * c) { max = (a + b) * c; }
    if(max < (a * b) + c) { max = (a * b) + c; }
    if(max < a * (b + c)) { max = a * (b + c); }
    if(max < a + (b * c)) { max = a + (b * c); }
    if(max < a + b + c) { max = a + b + c; }
    cout << max << endl;
    return 0;
}