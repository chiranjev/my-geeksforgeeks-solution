// https://www.youtube.com/watch?v=uFso48YRRao
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        stack<int>s;
        map<int,int> m;
        for(int i=0;i<n;i++){
            if(s.empty()){
                s.push(arr[i]);
            }else if(s.top()>arr[i]){
                s.push(arr[i]);
            }else if(s.top()<arr[i]){
                while(!s.empty()&&s.top()<arr[i]){
                    m[s.top()] = arr[i];
                    s.pop();
                }
                s.push(arr[i]);
            }
        }
        while(!s.empty()){
            m[s.top()] = -1;
            s.pop();
        }
        for(int i=0;i<n;i++){
            cout << m[arr[i]] << " ";
        }
        cout << endl;
    }
	return 0;
}
