#include <bits/stdc++.h>

using namespace std;

int main(){
    string guest, host, shuffle;
    vector<int> arr(26);
    cin >> guest >> host >> shuffle;
    for(int i = 0; i < guest.size(); i++){arr[guest[i] - 'A']++;}
    for(int i = 0; i < host.size(); i++){arr[host[i] - 'A']++;}
    for(int i = 0; i < shuffle.size(); i++){arr[shuffle[i] - 'A']--;}
    for(int i = 0; i < 26; i++){ if(arr[i] > 0 || arr[i] < 0){ cout << "NO" << endl; return 0; } }
    cout << "YES" << endl;
    return 0;
}