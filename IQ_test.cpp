#include <bits/stdc++.h>

using namespace std;

int main(){
    int cases, n, countEven = 0, countOdd = 0, indexEven = 0, indexOdd;
    cin >> cases;
    for(int i = 0; i < cases; i++){ 
        cin >> n; 
        if(n % 2 == 0){
            countEven++;
            indexEven = i + 1;
        }else{
            countOdd++;
            indexOdd = i + 1;
        }
    }
   
    if(countOdd == 1){ cout << indexOdd << endl; }
    else{ cout << indexEven << endl; }

    return 0;
}