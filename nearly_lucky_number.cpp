#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int number;
    int luckyNumber = 0;
    cin >> number;
    while(number > 0){
        if(number % 10  == 4 || number % 10  == 7){
            luckyNumber++;
        }
        number /= 10;
    }
    if(luckyNumber == 4 || luckyNumber == 7){ cout << "YES" << endl; }
    else{ cout << "NO" << endl; }
    
    return 0;
}