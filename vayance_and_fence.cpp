#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, h, a, total = 0;
    cin >> n >> h;
    while(n-- > 0){
        cin >> a;
        if(a <= h) { total++; }
        else{ total += 2; }
    }
    cout << total << endl;
    return 0;
}