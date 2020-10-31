#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    int sizeUpper = 0, sizeLower = 0;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        if(str[i] >= 97 && str[i] <= 122){sizeLower++;}
        else{sizeUpper++;}
    }

    for(int i = 0; i < str.size(); i++){
        if(sizeUpper > sizeLower && (str[i] >= 97 && str[i] <= 122)){
            str[i] = str[i] - ('a' - 'A');
        }else if((sizeLower > sizeUpper || sizeLower == sizeUpper) &&  (str[i] >= 65 && str[i] <= 90)){
            str[i] = str[i] + ('a' - 'A');
        }
    }
    cout << str << endl;
    return 0;
}