#include <bits/stdc++.h>

using namespace std;

int main(){
    int cases, a, b;
    cin >> cases;
    while(cases-- > 0){
        cin >> a >> b;
        int aim, count = 0, index = 10;
        aim = abs(a-b);
        while(aim != 0){
            if(aim / index > 0){
                count += aim / index;
                aim -= (aim / index) * index;
            }else{
                index--;
            }
        }
        cout << count << endl;
    } 
    return 0;
}