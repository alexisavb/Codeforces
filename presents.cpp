#include <bits/stdc++.h>

using namespace std;

int main(){
    int tam, n;
    cin >> tam;
    int present[tam];
    for(int i = 1; i <= tam; i++){
        cin >> n;
        present[n - 1] = i;
    }
    for(int i = 0; i < tam; i++){ cout << present[i] << " ";}
    cout << endl;
    return 0;
}