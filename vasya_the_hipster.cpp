#include <bits/stdc++.h>

using namespace std;

int main(){
    int blue, red, maximum, minimum;
    cin >> blue >> red;
    maximum = max(blue, red);
    minimum = min(blue, red);
    cout << minimum << " " << (maximum - minimum) / 2 << endl;  
    return 0;
}