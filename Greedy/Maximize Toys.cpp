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
        int n,k;
        cin >> n >> k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int i=0;
        int count=0;
        int sum = 0;
        while(sum+arr[i]<=k){
            count++;
            sum+=arr[i];
            i++;
        }
        cout << count << endl;
	}


	return 0;
}
