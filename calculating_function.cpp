#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int number;
    cin >> number;
    if(number % 2 == 0){ cout << ((number / 2) * -1) + number << endl; }
    else{ cout << ((number / 2) + 1) * -1 << endl;}
    return 0;
}