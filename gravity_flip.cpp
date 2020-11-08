#include <bits/stdc++.h>

using namespace std;

int main(){
    int number, cases;
    vector<int> arr;
    cin >> number;
    while(number-- > 0){
        cin >> cases;
        arr.push_back(cases);
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}