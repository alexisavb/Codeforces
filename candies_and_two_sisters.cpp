#include <bits/stdc++.h>

using namespace std;

int main(){
    int test, candies;
    cin >> test;
    while(test-- > 0){
        cin >> candies;
        if(candies % 2 == 0){ cout << (candies / 2) - 1 << endl; }
        else{ cout << candies - ((candies / 2) + 1) << endl; } 
    }
    return 0;
}