#include <bits/stdc++.h>

using namespace std;

int main(){
    int rooms, people, accommodate, total = 0;
    cin >> rooms;
    while(rooms-- > 0){
        cin >> people >> accommodate;
        if(people + 2 <= accommodate){ total++; }
    }
    cout << total << endl;
    return 0;
}