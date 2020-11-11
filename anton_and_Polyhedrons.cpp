#include <bits/stdc++.h>

using namespace std;

int main(){
    int cases, sum = 0;
    string str;
    map<string, int> mp;
    mp["Tetrahedron"] = 4;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;

    cin >> cases;
    while(cases-- > 0){
        cin >> str;
        sum += mp[str];
    }
    cout << sum << endl;
    return 0;
}