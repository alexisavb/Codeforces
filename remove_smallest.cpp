#include <bits/stdc++.h>

using namespace std;

int main(){
    int cases, tam, value;
    set<int> array;
    cin >> cases;

    while(cases-- > 0){
        cin >> tam;
        array.clear();
    
        for(int u = 0; u < tam; u++){
            cin >> value;
            array.insert(value);
        }
    
        for(auto u = array.begin(); u != array.end(); ){
            auto first = u;
            auto second = ++u;
            if(second != array.end() && (*second - *first) > 1){
                cout << "NO" << endl;
                break;
            }

            if(second == array.end()){
                cout << "YES" << endl;
            }
        }

    }

    return 0;
}