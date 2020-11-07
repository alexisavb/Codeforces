#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int number, ith, endOdd;
    cin >> number >> ith;
    if(number % 2 == 0){ endOdd = number / 2; }
    else{ endOdd = (number / 2) + 1; }
    
    if(ith <= endOdd){ cout << (ith * 2) - 1 << endl; }
    else{ cout << (ith - endOdd) * 2  << endl; }
    return 0;
}