#include <bits/stdc++.h>

using namespace std;

int main(){
    int val, max = 0, b = 0, c = 0;
    int array[4];
    for(int u = 0; u < 4; u++){
        cin >> val;
        array[u] = val;
        if(val > max){ max = val; }
    }

    for(int u = 0; u < 4; u++){
        if(array[u] != max && b == 0){
            b =  max - array[u]; 
        }else if(array[u] != max && c == 0){
            c =  max - array[u]; 
        }
    }
    
    cout << b << " " << c << " " << max - (b + c) << endl;
    return 0;
}