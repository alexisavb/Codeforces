#include <bits/stdc++.h>

using namespace std;

int main(){
    string str, strAux;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        if(str[i] != '+'){ strAux.push_back(str[i]); }
    }
    sort(strAux.begin(), strAux.end());

    for(int i = 0; i < strAux.size(); i++){
        cout << strAux [i];
        if(i != strAux.size() - 1) { cout << "+";}
    }
    cout << endl;
    return 0;
}