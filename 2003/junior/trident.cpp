/*

*/
#include <iostream>

using namespace std;
using ll = long long;

void solve(){
    int t, s, h;
    cin >> t >> s >> h;

    for(int i = 0; i < t; i++){
        cout << '*';
        for(int j = 0; j < s; j++) cout << ' ';
        cout << '*';
        for(int j = 0; j < s; j++) cout << ' ';
        cout << "*\n";
    }
    for(int i = 0; i < s * 2 + 3; i++) cout << '*';
    cout << "\n";
    for(int i = 0; i < h; i++){
        for(int j = 0; j < s + 1; j++) cout << ' ';
        cout << "*\n";
    }
}

int main(void){
    solve();
    return 0;
}