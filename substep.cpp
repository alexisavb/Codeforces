#include <bits/stdc++.h>

using namespace std;

int main(){
    string str, strAux;
    cin >> str;
    for(int i = 0; i < str.size(); ){
        if(str[i] == 'W' &&  (i + 1) < str.size() && (i + 2) < str.size() 
                && str[i + 1] == 'U' && str[i + 2] == 'B'){ i += 3; }
        else{
            strAux += str[i++];
            if(str[i] == 'W' &&  (i + 1) < str.size() && (i + 2) < str.size() 
                && str[i + 1] == 'U' && str[i + 2] == 'B'){ strAux += ' ';}
        }
    }
    cout << strAux << endl;
    return 0;
}