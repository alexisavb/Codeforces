#include <bits/stdc++.h>

using namespace std;

int main(){
    int tam;
    string str;
    cin >> tam >> str;
    vector <bool> arr(26);
    for (int i = 0; i < tam; i++){
        if(str[i] >= 97 && str[i] <= 122){ arr[(str[i] - ('a' - 'A')) - 'A'] = true; }
        else{ arr[str[i] - 'A'] = true; }
    }
    for(int i = 0; i < 26; i++){
        if(arr[i] != true){ cout << "NO" << endl; return 0;}
    }
    cout << "YES" << endl;
    return 0;
}