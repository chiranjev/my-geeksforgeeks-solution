#include <iostream>
using namespace std;

int toggleBits(int n,int l,int r){
    int num = ((1<<r)-1)^((1<<(l-1))-1);
    return num^n;
}

int main() {
    int n;
    cin >> n;
    while(n--){
        int num,l,r;
        cin >> num >> l >> r;
        cout << toggleBits(num,l,r) << endl;
    }
}
