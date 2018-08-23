#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;

int main()
{
	int t;

	cin >> t;

	while(t--)
	{
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        int ans = 0;
        for(int i=0;i<n;i++){
            ans+=a[i]*b[n-i-1];
        }
        cout << ans << endl;
	}


	return 0;
}
