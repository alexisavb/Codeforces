/*
    Author: Alexis Osnaya.
     URL: https://codeforces.com/problemset/problem/510/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    bool even = false, tail = true;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        even = i % 2 != 0;
        for(int j = 0; j < m; j++){
            if(even){
                if(tail && j != m - 1){ cout << ".";}
                else if(tail && j == m - 1){ cout << "#"; tail = false;}
                else if(!tail && j == 0){ cout << "#"; }
                else if(!tail && j != 0){ cout << "."; if(j == m - 1){tail = true; } }
                
            }else{ 
                cout << "#"; 
            }
        }
        cout << endl;
    }

    return 0;
}