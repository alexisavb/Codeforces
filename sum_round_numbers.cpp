/* Autor: Alexis Osnaya URL:https://codeforces.com/problemset/problem/1352/A*/
#include <bits/stdc++.h>

using namespace std;

int power(int x, unsigned int y) { 
    if (y == 0) 
        return 1; 
    else if (y % 2 == 0) 
        return power(x, y / 2) * power(x, y / 2); 
    else
        return x * power(x, y / 2) * power(x, y / 2); 
} 

int main(){
    int cases, number;
    vector<int> roundNumbers;
    cin >> cases;
    while(cases-- > 0){
        roundNumbers.clear();
        cin >> number;
        for(int i = 0; number != 0; i++){
            if(number % 10 != 0){
                roundNumbers.push_back(number % 10 * power(10,i));
            }
            number /= 10;
        }
        cout << roundNumbers.size() << endl;
        for (int i = 0; i < roundNumbers.size(); i++) {
            cout << roundNumbers[i] << " ";
        }
        cout << endl;
    }
    return 0;
}