/*
    Author: Alexis Osnaya.
    URL: https://codeforces.com/problemset/problem/339/B
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int houses, tasks, a, pivot = 1, total = 0;
    vector<long long int> vctr;
    cin >> houses >> tasks >> a;
    vctr.push_back(a);
    for(int i = 1; i < tasks; i++){
        cin >> a;
        if(vctr[pivot - 1] != a){
            vctr.push_back(a);
            pivot++;
        }
    }

    total += vctr[0] - 1;
    for(int i = 1; i < vctr.size(); i++){
        if(vctr[i] - vctr[i - 1] > 0){ total += vctr[i] - vctr[i - 1]; }
        else{ total += ((houses - vctr[i - 1]) + vctr[i]); }
    }
    cout << total << endl;
    return 0;
}