#include <bits/stdc++.h>

using namespace std;

int main(){
    int sumx = 0, sumy = 0, sumz = 0;
    int n, x, y, z;
    cin >> n;
    while(n--){
        cin >> x >> y >> z;
        sumx += x;
        sumy += y;
        sumz += z;
    }
    if(sumx == 0 && sumy == 0 && sumz == 0){ cout << "YES" << endl;}
    else{ cout << "NO" << endl;}
    return 0;
}