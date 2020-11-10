#include <bits/stdc++.h>

using namespace std;

int main(){
    int level, suceess, a, count = 0;
    cin >> level >> suceess;
    vector<bool>arr(level);
    for(int i = 0; i < suceess; i++){ 
        cin >> a; 
        if(arr[a - 1] == 0){
            arr[a - 1] =  1;
             count++;
        }
    }
    cin >> suceess;
    for(int i = 0; i < suceess; i++){ 
        cin >> a; 
        if(arr[a - 1] == 0){
            arr[a - 1] =  1;
             count++;
        }
    }
    if(count == level){ cout << "I become the guy." << endl; }
    else{ cout << "Oh, my keyboard!" << endl; }
    return 0;
}