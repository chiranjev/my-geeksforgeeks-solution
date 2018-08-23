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
        int val;
        int ans = INT_MAX;
        for(int i=0;i<n;i++){
            cin >> val;
            ans = min(val,ans);
        }
        cout << ans << endl;
	}


	return 0;
}
