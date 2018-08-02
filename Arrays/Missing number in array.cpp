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
        int sum = 0;
        int total_sum = (n*(n+1))/2;
        int arr[n];
        for(int i=0;i<n-1;i++){
            cin >> arr[i];
            sum+=arr[i];
        }
        cout << total_sum-sum << endl;
	}


	return 0;
}
