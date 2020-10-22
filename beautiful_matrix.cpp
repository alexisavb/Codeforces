#include <bits/stdc++.h>

using namespace std;

int main(){
    int positionX, positionY;
    int val, result = 0, num = 0, i = 0;
    while (cin >> val){
        if (val == 1){ num = i;}
        i++;
        if(i > 24){break;}
    }

    positionX = num % 5;
    positionY = num / 5;

    if(positionX <= 2){result = 2 - positionX;}
    else{ result = positionX - 2;}

    if(positionY <= 2){result += 2 - positionY;}
    else{ result += positionY -2;}
    cout << result;
    return 0;
}