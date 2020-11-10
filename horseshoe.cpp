#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    set<int> arr;
    for(int i = 0; i < 4; i++){
        cin >> a;
        arr.insert(a);
    }
    cout << 4 -arr.size() << endl;
    return 0;
}