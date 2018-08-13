#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        queue<string> q;
        q.push("1");
        int n;
        cin >> n;
        while(n--){
            string val = q.front();
            cout << val << " ";
            q.pop();
            string temp = val;
            val.append("0");
            q.push(val);
            temp.append("1");
            q.push(temp);
        }
        cout << endl;
    }
	return 0;
}
