/*
    Author: Alexis Osnaya.
     URL: https://codeforces.com/problemset/problem/472/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int number;
    cin >> number;
    vector<bool>isPrime(number, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < number; ++i) {
        if (isPrime[i]) { for (int h = 2; h * i < number; ++h) { isPrime[i * h] = 0; } }
    }
    for(int i = 4; i < isPrime.size(); i++){
        if(!isPrime[i] && !isPrime[number - i]){ cout << number - i << " " << i << endl; return 0;}
    }
    cout << number - 4 << " 4" << endl; 
    return 0;
}