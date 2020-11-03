#include <bits/stdc++.h>

using namespace std;

int main(){
    int groups, s, total = 0;
    map<int,int> taxis;
    cin >> groups;
    while(groups-- > 0){
        cin >> s;
        taxis[s]++;
    }

    total += taxis[4];
    
    total += (taxis[2] * 2) / 4;
    if((taxis[2] * 2) % 4 == 0){
        taxis[2] -= (taxis[2] * 2) / 2;
    }else{
        taxis[2] -= ((taxis[2] * 2) - (taxis[2] * 2) % 4) / 2;
    }
     
    taxis[1] -= (taxis[3] * 4) - (taxis[3] * 3);
    total += taxis[3];

    if(taxis[2] > 0){
        taxis[1] -=  2;
        total++;
    }
    
    if(taxis[1] > 0){
        if(taxis[1] % 4 != 0) { total += (taxis[1] / 4) + 1; }
        else{ total += taxis[1] / 4;}
    }
    
    cout << total << endl;
    return 0;
}