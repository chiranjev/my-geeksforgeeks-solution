#include <iostream>
using namespace std;

string kthBitSet(int n,int p){
    int mask = 1<<p;
    if(n&mask){
        return "Yes";
    }
    return "No";
}

int main() {
    int n;
    cin >> n;
    while(n--){
        int num,pos;
        cin >> num >> pos;
        cout << kthBitSet(num,pos) << endl;
    }
}
