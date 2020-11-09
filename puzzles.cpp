#include <bits/stdc++.h>

using namespace std;

int main(){
    int students, puzzles, sizes, carry = 2000, range, aux = 0;
    vector<int> arr;
    cin >> students >> puzzles;
    range = students;
    for(int i = 0; i < puzzles; i++){
        cin >> sizes;
        arr.push_back(sizes);
    }
    sort(arr.begin(),arr.end());
    while(students <= puzzles){
        vector<int> auxArr(arr.begin() + aux, arr.begin() + (range + aux));
        sort(auxArr.begin(), auxArr.end());
        if(auxArr[range - 1] - auxArr[0] < carry){carry = auxArr[range - 1] - auxArr[0];}
        students++;
        aux++;
    }
    cout << carry << endl;
    return 0;
}