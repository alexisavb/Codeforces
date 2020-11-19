#include <bits/stdc++.h>

using namespace std;

int main(){
    int money, total = 0;
    cin >> money;
    while(money != 0){
        if(money >= 100){ money -= 100; total++;}
        else if(money >= 20){ money -= 20; total++; }
        else if(money >= 10){ money -= 10; total++; }
        else if(money >= 5){ money -= 5; total++; }
        else { money -= 1; total++; }
    }
    cout << total << endl;
    return 0;
}