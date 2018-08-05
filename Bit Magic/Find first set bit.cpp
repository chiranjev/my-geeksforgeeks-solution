#include <iostream>
using namespace std;

int getFirstSetBit(int n){
    int pos = 1;
    while(n){
        if(n&1){
            return pos;
        }
        n>>=1;
        pos++;
    }
}

int main() {
    int n;
    cin >> n;
    while(n--){
        int num;
        cin >> num;
        cout << getFirstSetBit(num) << endl;
    }
}
