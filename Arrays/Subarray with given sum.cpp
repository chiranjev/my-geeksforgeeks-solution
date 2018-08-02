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
        int n,s;
        cin >> n >> s;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }

        int si = 0,ei=0;
        int sum = 0;
        int i = 0;
        while(ei<n){
            if(sum+arr[ei]==s){
                sum+=arr[ei];
                break;
            }else if(sum+arr[ei]<s){
                sum+=arr[ei];
                ei++;
            }else{
                sum-=arr[si];
                si++;
            }
        }
        if(ei>=n){
            cout << "-1" << endl;
        }else{
            cout << si+1 << " " << ei+1 << endl;
        }
	}
	return 0;
}
