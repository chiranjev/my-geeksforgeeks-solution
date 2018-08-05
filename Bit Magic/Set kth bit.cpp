#include <iostream>
using namespace std;

int setKthBit(int n,int p){
    int mask = 1<<p;
    return n|mask;
}

int main() {
    int n;
    cin >> n;
    while(n--){
        int num,pos;
        cin >> num >> pos;
        cout << setKthBit(num,pos) << endl;
    }
}
