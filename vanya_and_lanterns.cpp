/*
    Author: Alexis Osnaya.
    URL: https://codeforces.com/problemset/problem/492/B
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int length, lanterns, aux, m = 0;
    cin >> length >> lanterns;
    vector<int> vctr;

    for(int i = 0; i < length; i++){ cin >> aux; vctr.push_back(aux); }

    sort(vctr.begin(), vctr.end());

    for(int i = 0; i < length - 1; i++){ 
        if(vctr[i + 1] - vctr[i] > m) { m = vctr[i + 1] - vctr[i]; } 
    }

    cout.precision(10);
    cout << fixed << max(max((double) m / 2, (double) vctr[0]), (double) lanterns - vctr[length - 1]) << endl; 
    return 0;
}