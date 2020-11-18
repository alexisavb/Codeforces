#include <bits/stdc++.h>

using namespace std;

int main(){
    int games, host, guest, total = 0;
    map<int,int> mpHost;
    cin >> games;
    vector<int> arr;
    while(games-- > 0){
        cin >> host >> guest;
        mpHost[host]++;
        arr.push_back(guest);
    }

    for(int i = 0; i < arr.size(); i++){
        if(mpHost[arr[i]] != 0){ total += mpHost[arr[i]]; }
    }

    cout << total << endl;
    return 0;
}