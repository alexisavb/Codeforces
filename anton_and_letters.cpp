#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    set<char> st;
    getline(cin,str);
    for(int i = 0; i < str.size(); i++){
        if(str[i] != '{' && str[i] != '}' && str[i] != ',' && str[i] != ' '){
            st.insert(str[i]);
        }
    }
    cout << st.size() << endl;
    return 0;
}
