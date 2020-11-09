#include <bits/stdc++.h>

using namespace std;

int main(){
    int number, cases;
    double total = 0.0;
    cin >> number;
     
    for(int i = 0; i < number; i++){ cin >> cases; total += cases; }
    cout.precision(12);
    cout << fixed << total / number << endl;
    return 0;
}