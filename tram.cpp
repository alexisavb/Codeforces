#include <bits/stdc++.h>

using namespace std;

int main(){
    int total, a, b;
    int carryMax, carry;
    cin >> total;
    cin >> a >> b;
    carryMax = b;
    carry =  b;
    while(--total != 0){
        cin >> a >> b;
        carry = (carry - a) + b;
        if(carry > carryMax){ carryMax = carry;}
    }
    cout << carryMax << endl;
    return 0;
}