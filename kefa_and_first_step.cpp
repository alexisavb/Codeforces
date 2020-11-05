#include <bits/stdc++.h>

using namespace std;

int main(){
    int i, carry = 0, max = 0, maxOld = 0, s;
    cin >> i;
    while(i-- > 0){
        cin >> s;
        if(s >= carry){
            max++;
        }else{
            if(max > maxOld) { maxOld = max;}
            max = 1;
        }
        carry = s;
    }
    if(max > maxOld) { maxOld = max;}
    cout << maxOld << endl;
    return 0;
}
