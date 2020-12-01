/*
    Author: Alexis Osnaya.
    URL: https://codeforces.com/problemset/problem/230/A

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int strength, dragons, dragonStrength, bonus;
    vector<pair<int,int> > vctr;
    cin >> strength >> dragons;
    while(dragons-- > 0){
        cin >> dragonStrength >> bonus;
        vctr.push_back(pair<int,int>(dragonStrength,bonus));
    }

    sort(vctr.begin(), vctr.end());

    for(int i = 0; i < vctr.size(); i++){
         if(strength > vctr[i].first){ strength += vctr[i].second; }
        else{ cout << "NO" << endl; return 0;}
    }
    cout << "YES" << endl;
    return 0;
}