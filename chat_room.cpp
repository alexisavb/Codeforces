#include <bits/stdc++.h>

using namespace std;

int main(){
    string str, strHello = "hello";
    int slide = 0, index = 0;
    cin >> str;
    while(slide < str.size()){
       if(str[slide++] == strHello[index]){
           index++;
       }
       if(index == 5) { cout << "YES" << endl; return 0;}
    }
    cout << "NO" << endl;
    return 0;
}