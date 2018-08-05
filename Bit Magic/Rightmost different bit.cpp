#include <iostream>
using namespace std;

int rightmostDiffBit(int a,int b){
    int pos = 1;
    while(a&&b){
        if((a&1)^(b&1)){
            break;
        }
        a>>=1;
        b>>=1;
        pos++;
    }
    return pos;
}

int main() {
    int n;
    cin >> n;
    while(n--){
        int num1,num2;
        cin >> num1 >> num2;
        cout << rightmostDiffBit(num1,num2) << endl;
    }
}
