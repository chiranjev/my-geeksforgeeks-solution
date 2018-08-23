#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;

int mincoins(int dp[],int arr[],int n,int amt){
    if(amt==0){
        return 0;
    }
    if(dp[amt]){
        return dp[amt];
    }else{
        dp[amt] = INT_MAX;
        for(int i=0;i<n;i++){
            if(amt-arr[i]>=0){
                int min_coins = mincoins(dp,arr,n,amt-arr[i]);
                if(min_coins!=INT_MAX){
                    dp[amt]=min(dp[amt],1+min_coins);
                }
            }
        }
    }
    return dp[amt];
}

int main()
{

	int t;

	cin >> t;
	while(t--)
	{
        int n,amt;
        cin >> n >> amt;
        int arr[n];
        int dp[amt+1]={0};
        for(int i=0;i<n;i++){
            cin >> arr[i];
            dp[arr[i]]=1;
        }
        int ans = mincoins(dp,arr,n,amt);
        if(ans==INT_MAX){
            cout << "-1" << endl;
        }else{
            cout << ans << endl;
        }

	}


	return 0;
}
