#include <bits/stdc++.h>

using namespace std;

int main(){
    int year, a, b, c, d, aux;
    cin >> year;
    while(year++ > 0){
        aux = year;
        a = aux % 10;
        b = (aux /= 10) % 10;
        c = (aux /= 10) % 10;
        d = (aux /= 10) % 10;
        if(a != b && a != c && a != d && b != c && b!= d && c != d){ cout << year << endl; return 0;}
    } 
    return 0;
}