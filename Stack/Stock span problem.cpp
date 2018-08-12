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
        int stock[n];
        stock[0]=1;
        stack<int> s;
        s.push(0);
        int ans = 1;
        for(int i=1;i<n;i++){
            while(!s.empty()&&(arr[s.top()]<=arr[i])){
                s.pop();
            }
            if(!s.empty()){
                stock[i]=i-s.top();
            }else{
                stock[i]=(i+1);
            }
            if(stock[i]>ans){
                ans = stock[i];
            }
            s.push(i);
        }
        for(int i=0;i<n;i++){
            cout << stock[i] << " ";
        }
        cout << endl;
    }
	return 0;
}
