#include <bits/stdc++.h>

using namespace std;

int main(){
    int number, anton = 0, danik = 0;
    string str;
    cin >> number >> str;
    for(int i = 0; i < number; i++){
        if(str[i] == 'A'){ anton++; }
        else{ danik++; }
    }
    if(anton > danik){ cout << "Anton" << endl; }
    else if(danik > anton){ cout << "Danik" << endl; }
    else { cout << "Friendship" << endl; }
    return 0;
}