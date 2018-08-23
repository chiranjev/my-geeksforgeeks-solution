#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;

int numberOfPaths(int m,int n){
    if(m==1||n==1){
        return 1;
    }else{
        return numberOfPaths(m,n-1)+numberOfPaths(m-1,n);
    }
}

int main()
{
	int t;

	cin >> t;

	while(t--){
        int m,n;
        cin >> m >> n;
        cout << numberOfPaths(m,n) << endl;
	}


	return 0;
}
