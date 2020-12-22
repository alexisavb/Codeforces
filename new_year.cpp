#include <bits/stdc++.h>

using namespace std;

int main(){
    int problems, minutesParty, minutesMax = 240, index = 1;
    cin >> problems >> minutesParty;
    minutesMax -= minutesParty;
    while(minutesMax - (index * 5) >= 0 && problems != 0){
        minutesMax -= index * 5;
        index++;
        problems--;
    }
    cout << index - 1 << endl;
    return 0;
}